#!/usr/bin/env bash

BUILD_DIR="cmake-build-debug" &&

cmake -S . -B "${BUILD_DIR}" &&
cd "${BUILD_DIR}" &&
make nico_introduccion_a_c &&
./nico_introduccion_a_c
