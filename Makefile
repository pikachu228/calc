all: build load test
build:
	mkdir build
load: build/calc.o build/con.o build/stcalc.o build/streal.o
	gcc -Wall build/calc.o build/con.o build/stcalc.o build/streal.o -o load
test: build build/test.o build/ctest.o 
	gcc -Wall build/test.o build/ctest.o -o test
build/calc.o: src/calc.c
	gcc -I src/headers -c src/calc.c -o build/calc.o
build/con.o:
	gcc -I src/headers -c src/con.c -o build/con.o
build/stcalc.o: src/stcalc.c
	gcc -I src/headers -c src/stcalc.c -o build/stcalc.o
build/streal.o: src/streal.c
	gcc -I src/headers -c src/streal.c -o build/streal.o
build/test.o: src/test.c
	gcc -I thirdparty -I src/headers -c src/test.c -o build/test.o
build/ctest.o: src/ctest.c
	gcc -I thirdparty -I src/headers -c src/ctest.c -o build/ctest.o
.PHONY: clean
clean: 
	rm -rf *.o *exe build/ test load
