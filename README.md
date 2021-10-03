# ICU4X Demos for IUC 45

This repository contains demos for ICU4X for the 45th Internationalization and Unicode Conference.

## JavaScript Demo

**Notes:**

1. We do not yet have a package published to npm. The method of importing ICU4X as found in this repository is temporary.
2. `icu_capi.wasm` is a complete package. Dead code elimination has not been performed on it.

### Bootstrapping

As a one-time setup:

```
$ cd js
$ npm install /path/to/icu4x/ffi/diplomat/wasm
```

This requires your `icu4x` directory to contain the changes from [#1143](https://github.com/unicode-org/icu4x/pull/1143).

### Running

```
$ make run-js
```

Then browse to http://localhost:8080/

### Additional Notes

`icu4x-datagen` must be in your PATH in order for `make run-js` to work. If it is not, you can set the DATAGEN environment variable, such as:

```
$ export DATAGEN="cargo run --manifest-path path/to/icu4x/Cargo.toml --bin icu4x-datagen --"
```

For simplicity, the icu_capi.wasm file is checked in to this repository. It can be rebuilt at any time from ICU4X and then copied here.
