cc = emcc
main = main.cpp
output = index
flags = -std=c++11 --preload-file model.dae -s WASM=1 -s USE_SDL=2 -O3
inc = $(shell find ./include -name "*.h")
src = $(shell find ./src -name "*.cpp" -and -not -name "$(main)")
obj = $(src:%.cpp=%.o) 

TINYXML_INC = $(shell find ./tinyxml -name "*.h")
TINYXML_SRC = $(shell find ./tinyxml -name "*.cpp" -and -not -name "$(main)")
TINYXML_OBJ = $(TINYXML_SRC:%.cpp=%.o)

COLLADA_INC = $(shell find ./collada -name "*.h")
COLLADA_SRC = $(shell find ./collada -name "*.cpp" -and -not -name "$(main)")
COLLADA_OBJ = $(COLLADA_SRC:%.cpp=%.o)

main: $(TINYXML_OBJ) $(COLLADA_OBJ)
	$(cc) $(flags) -o $(output).js $(TINYXML_OBJ) $(COLLADA_OBJ) ${main}

%.o: %.c $(TINYXML_INC) $(COLLADA_INC)
	$(cc) -c $< -o $@

clean:
	rm $(TINYXML_OBJ) $(COLLADA_OBJ) $(output).js $(output).wasm