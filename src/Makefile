# src/Makefile
include ../config/make.conf

all: CppExample

clean:
	$(RMFORCE) CppExample
	$(RMFORCE) ../bin/CppExample

CppExample: CppExample.cpp 
	$(CC) $(INC) CppExample.cpp $(LIBS) -o CppExample $(EXEFLAGS) #$(WFLAGS)
	cp CppExample ../bin/
