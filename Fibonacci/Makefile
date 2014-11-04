.PHONY all:
all: clean build test

.PHONY build:
build: Fibonacci.cpp
	cl/EHsc Fibonacci.cpp 
 
.PHONY test:
test: testclean testbuild #tests


.PHONY testbuild:
testbuild: test.cpp
	cl/EHsc test.cpp


#.PHONY tests: test.cpp
#	./test.cpp

.PHONY: testclean
testclean:
	 del test.obj test.exe


.PHONY clean:
clean:
	-del Fibonacci.obj Fibonacci.exe


