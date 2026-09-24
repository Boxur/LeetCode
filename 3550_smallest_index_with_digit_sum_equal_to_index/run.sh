cmake -S . -B out
cmake --build out
ctest  --output-on-failure --test-dir out
