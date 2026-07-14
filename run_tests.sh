#!/bin/bash
set -euo pipefail
cd "$(dirname "$0")"
mkdir -p build
cd build
cmake ..
cmake --build . --config Release
ctest --output-on-failure | tee ../test_output.txt
