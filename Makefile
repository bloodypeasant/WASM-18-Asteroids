all : 
	em++ \
		Controller.cpp Game.cpp Main.cpp Model.cpp View.cpp \
		-std=c++17 \
		--emrun \
		--preload-file sprites \
		-s USE_WEBGL2=1 \
		-s USE_SDL=2 \
		-s USE_SDL_IMAGE=2 \
		-s SDL2_IMAGE_FORMATS=["png"] \
		-o wasm-18.html

clean : 
	rm wasm-18.html wasm-18.data wasm-18.js wasm-18.wasm

run :
	emrun --browser chrome wasm-18.html