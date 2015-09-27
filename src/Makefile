# src/Makefile
include ../config/make.conf

all: CppExample ../obj/libUseEnumeration.a ../obj/libUseInheritance.a

clean: cleanEnumeration cleanInheritance
	$(RMFORCE) CppExample
	$(RMFORCE) ../bin/CppExample

CppExample: CppExample.cpp ../obj/libUseEnumeration.a ../obj/libUseInheritance.a
	$(CC) $(INC) CppExample.cpp $(LIBS) -o CppExample $(EXEFLAGS) #$(WFLAGS)
	cp CppExample ../bin/

#########################################
##### Build the Enumeration Example #####
cleanEnumeration:
	$(RMFORCE) Enumeration/UseEnumeration.o
	$(RMFORCE) Enumeration/libUseEnumeration.a
	$(RMFORCE) ../obj/libUseEnumeration.a
	
../obj/libUseEnumeration.a: Enumeration/UseEnumeration.o
	ar rvs Enumeration/libUseEnumeration.a Enumeration/UseEnumeration.o
	cp Enumeration/libUseEnumeration.a ../obj
	
Enumeration/UseEnumeration.o: Enumeration/UseEnumeration.cpp
	$(CC) $(CFLAGS) $(INC) -o Enumeration/UseEnumeration.o Enumeration/UseEnumeration.cpp
	

#########################################
##### Build the Inheritance Example #####
cleanInheritance:
	$(RMFORCE) Inheritance/Shape.o
	$(RMFORCE) Inheritance/Circle.o
	$(RMFORCE) Inheritance/Rectangle.o
	$(RMFORCE) Inheritance/Triangle.o
	$(RMFORCE) Inheritance/libUseInheritance.a
	$(RMFORCE) ../obj/libUseInheritance.a
		
../obj/libUseInheritance.a: $(SHAPEOBJS)
	ar rvs Inheritance/libUseInheritance.a $(SHAPEOBJS)
	cp Inheritance/libUseInheritance.a ../obj
	
Inheritance/Shape.o: Inheritance/Shape.cpp
	$(CC) $(CFLAGS) $(INC) -o Inheritance/Shape.o Inheritance/Shape.cpp

Inheritance/Circle.o: Inheritance/Circle.cpp
	$(CC) $(CFLAGS) $(INC) -o Inheritance/Circle.o Inheritance/Circle.cpp

Inheritance/Rectangle.o: Inheritance/Rectangle.cpp
	$(CC) $(CFLAGS) $(INC) -o Inheritance/Rectangle.o Inheritance/Rectangle.cpp

Inheritance/Triangle.o: Inheritance/Triangle.cpp
	$(CC) $(CFLAGS) $(INC) -o Inheritance/Triangle.o Inheritance/Triangle.cpp
	