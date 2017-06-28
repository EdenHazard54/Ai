.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/Proga.exe 

bin/Proga.exe: build/Mainai.o build/korni2.o 
	gcc $(CFLAGS) build/Mainai.o build/korni2.o -o bin/Proga.exe -lm

build/main.o: src/Mainai.c src/korni2.h
	gcc $(CFLAGS) -c src/Mainai.c -o build/Mainai.o -lm

build/korni2.o: src/korni2.c src/korni2.h 
	gcc $(CFLAGS) -c src/korni2.c -o build/korni2.o -lm

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@echo "Cleaning binaries"
	@rm -rf bin/Proga.exe 
	@echo "All files have been cleaned."	

-include build/*.d
