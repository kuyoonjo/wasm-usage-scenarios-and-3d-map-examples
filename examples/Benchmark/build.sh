rm Benchmark
rm Benchmark.wasm
rm Benchmark.js
rm Benchmark.class

g++ Benchmark.cpp --std=c++11 -O3 -ffast-math -o Benchmark
javac Benchmark.java
emcc Benchmark.cpp --std=c++11 -O3 -ffast-math -o Benchmark.js