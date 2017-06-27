.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/proga.exe 

bin/proga.exe: build/Mainai.o build/korni2.o 
	gcc $(CFLAGS) build/Mainai.o build/korni2.o -o bin/proga.exe -lm

build/main.o: src/Mainai.c src/korni2.h
	gcc $(CFLAGS) -c src/Mainai.c -o build/Mainai.o -lm

build/korni2.o: src/korni2.c src/korni2.h 
	gcc $(CFLAGS) -c src/korni2.c -o build/korni2.o -lm

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@rm -rf build/test/*.d build/test/*.o
	@echo "Cleaning binaries"
	@rm -rf bin/proga.exe 
	@echo "All files have been cleaned."	

-include build/*.d
