#!/usr/bin/env bash

# Note: if icu4x-datagen is not installed globally, you can set a path such as:
#
# $ export DATAGEN="cargo run --manifest-path path/to/icu4x/Cargo.toml --bin icu4x-datagen --"

DATAGEN?=icu4x-datagen

js/data/%.postcard:
	mkdir -p data
	$(DATAGEN) --format=blob --out=$@ -k "decimal/symbols@1" -k "plurals/cardinal@1" -k "plurals/ordinal@1" --cldr-testdata -l $(basename $(notdir $@))

all: data

data: js/data/ar.postcard \
	js/data/ar-EG.postcard \
	js/data/bn.postcard \
	js/data/ccp.postcard \
	js/data/en.postcard \
	js/data/en-001.postcard \
	js/data/en-ZA.postcard \
	js/data/es.postcard \
	js/data/es-AR.postcard \
	js/data/fr.postcard \
	js/data/ja.postcard \
	js/data/ru.postcard \
	js/data/sr.postcard \
	js/data/sr-Cyrl.postcard \
	js/data/sr-Latn.postcard \
	js/data/th.postcard \
	js/data/tr.postcard \
	js/data/und.postcard

clean:
	rm -rf data

run-js: all
	npm install --prefix js
	npm run server --prefix js

.PHONY: all clean data run-js
