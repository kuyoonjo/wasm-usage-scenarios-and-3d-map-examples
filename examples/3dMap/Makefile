cc = emcc
main = main.cpp
output = index
flags = -std=c++11 -L./assimp/lib -lassimp -s WASM=1 -s USE_SDL=2 -O3
headers = $(shell find . -name "*.h")
src = $(shell find . -name "*.cpp" -and -not -name "$(main)")
obj = $(src:%.cpp=%.o) 

main: $(obj)
	$(cc) -o $(output).js $(obj)

%.o: %.c $(headers)
	$(cc) -c $< -o $@

clean:
	echo $(obj) $(output).js $(output).wasm