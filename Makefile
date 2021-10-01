#!/usr/bin/env bash

# Note: if icu4x-datagen is not installed globally, you can set a path such as:
#
# $ export DATAGEN="cargo run --manifest-path path/to/icu4x/Cargo.toml --bin icu4x-datagen --"

DATAGEN?=icu4x-datagen

data/%.postcard:
	mkdir -p data
	$(DATAGEN) --format=blob --out=$@ --all-keys --cldr-testdata -l $(basename $(notdir $@))


all: data/ar.postcard \
    data/ar-EG.postcard \
    data/bn.postcard \
    data/ccp.postcard \
    data/en.postcard \
    data/en-001.postcard \
    data/en-ZA.postcard \
    data/es.postcard \
    data/es-AR.postcard \
    data/fr.postcard \
    data/ja.postcard \
    data/ru.postcard \
    data/sr.postcard \
    data/sr-Cyrl.postcard \
    data/sr-Latn.postcard \
    data/th.postcard \
    data/tr.postcard \
    data/und.postcard

clean:
	rm -rf data
