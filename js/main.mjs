import {
    ICU4XDataProvider,
    ICU4XLocale,
    ICU4XFixedDecimal,
    ICU4XFixedDecimalFormat,
    ICU4XFixedDecimalFormatOptions,
    ICU4XPluralRules,
    ICU4XPluralOperands,
} from "./node_modules/icu4x-wasm/lib/api.mjs"

let currentLocale = null;
let currentProvider = null;

export async function loadLocale(locale) {
    const response = await fetch(`data/${locale}.postcard`);
    const blob = await response.blob();
    const arrayBuffer = await blob.arrayBuffer();
    const result = ICU4XDataProvider.create_from_byte_slice(arrayBuffer);
    if (result.success) {
        currentLocale = ICU4XLocale.create(locale);
        currentProvider = result.provider;
        return true;
    } else {
        console.error("Could not create new data provider for:", locale);
        return false;
    }
};

export function formatNumber(input) {
    const decimalResult = ICU4XFixedDecimal.create_fromstr(String(input));
    if (!decimalResult.success) {
        console.error("Could not create ICU4XFixedDecimal for:", input);
        return false;
    }
    console.log("Created decimal:", decimalResult.fd.to_string());
    const fmtResult = ICU4XFixedDecimalFormat.try_new(currentLocale, currentProvider, ICU4XFixedDecimalFormatOptions.default());
    if (!fmtResult.success) {
        console.error("Could not create ICU4XFixedDecimalFormat for:", currentLocale);
        return false;
    }
    return fmtResult.fdf.format(decimalResult.fd);
};

export function getPluralForm(input) {
    const operands = ICU4XPluralOperands.create(String(input));
    const prulesResult = ICU4XPluralRules.create(currentLocale, currentProvider);
    if (!prulesResult.success) {
        console.error("Could not create ICU4XPluralRules for:", currentLocale);
        return false;
    }
    return prulesResult.rules.select(operands);
}
