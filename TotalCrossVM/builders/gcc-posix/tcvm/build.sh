#!/bin/bash
BASEDIR=$(dirname $0)
WORKDIR=$(cd $BASEDIR; pwd)

sudo rm -Rf bin

# execute docker run
docker run \
    --rm \
    -v $WORKDIR:/build \
    -v $WORKDIR/../../../deps/skia:/skia \
    -v $WORKDIR/../../../src:/src \
    -e SRCDIR=/../../../src \
    -e LIBS="-L. -lskia -lstdc++ -lpthread -lfontconfig -lGL -lSDL2main -lSDL2" \
    -t totalcross/amd64-cross-compile:bionic \
    bash -c "make  -j$(($(nproc) + 2)) -f /build/Makefile"

# copy the artifacts
cp bin/libtcvm.so $PATH_TO_VALID_SDK/dist/vm/linux
