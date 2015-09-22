# src/Makefile
include ../config/make.conf

all: CppExample ../obj/libUseEnumeration.a

clean: cleanEnumeration
	$(RMFORCE) CppExample
	$(RMFORCE) ../bin/CppExample

CppExample: CppExample.cpp ../obj/libUseEnumeration.a
	$(CC) $(INC) CppExample.cpp $(LIBS) -o CppExample $(EXEFLAGS) #$(WFLAGS)
	cp CppExample ../bin/

##### Enumeration Example #####
cleanEnumeration:
	$(RMFORCE) Enumeration/UseEnumeration.o
	$(RMFORCE) Enumeration/libUseEnumeration.a
	$(RMFORCE) ../obj/libUseEnumeration.a
	$(RMFORCE) Enumeration/libUseEnumeration.so
	$(RMFORCE) ../bin/libUseEnumeration.so
	
../obj/libUseEnumeration.a: Enumeration/UseEnumeration.o
	ar rvs Enumeration/libUseEnumeration.a Enumeration/UseEnumeration.o
	cp Enumeration/libUseEnumeration.a ../obj
	
Enumeration/UseEnumeration.o: Enumeration/UseEnumeration.cpp
	$(CC) $(CFLAGS) $(INC) -o Enumeration/UseEnumeration.o Enumeration/UseEnumeration.cpp
	
