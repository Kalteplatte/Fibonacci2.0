#CC:=vcexpress -g 


#.PHONY: all:
#	all: build
 
#.PHONY: build: 
#	build:

#.PHONY tests:
#	tests: testfile

#.PHONY clean:
#	rm Fibonacci Fibonacci.o


.PHONY all:

all: build

.PHONY build:

build: Fibonacci.cpp
	cl/EHsc Fibonacci.cpp 
 


#Fibonacci.obj :Fibonacci.cpp
#	cl/EHsc Fibonacci.cpp 


#Fibonacci.exe: Fibonacci.cpp
#	cl/EHsc Fibonacci.cpp



clean:
	- del Fibonacci.obj Fibonacci.exe



run: Fibonacci
	./Fibonacci

