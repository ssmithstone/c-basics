.PHONY: build
run: build
	./build/main
clean:
	rm -rf build/*

build: clean
	gcc -o build/main src/main.c
