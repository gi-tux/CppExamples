# src/Makefile
include ../config/make.conf

all: CppExample ../obj/libUseEnumeration.a ../obj/libUseInheritance.a ../obj/libUseFactory.a ../obj/libUseVector.a ../obj/libUseDeque.a

clean: cleanEnumeration cleanInheritance cleanFactory cleanVector cleanDeque
	$(RMFORCE) CppExample
	$(RMFORCE) ../bin/CppExample

CppExample: CppExample.cpp ../obj/libUseEnumeration.a ../obj/libUseInheritance.a ../obj/libUseFactory.a ../obj/libUseVector.a ../obj/libUseDeque.a
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
	
#####################################
##### Build the Factory Example #####
cleanFactory:
	$(RMFORCE) Factory/UseFactory.o
	$(RMFORCE) Factory/libUseFactory.a
	$(RMFORCE) ../obj/libUseFactory.a

../obj/libUseFactory.a: Factory/UseFactory.o ../obj/libUseInheritance.a
	ar rvs Factory/libUseFactory.a Factory/UseFactory.o
	cp Factory/libUseFactory.a ../obj
	
Factory/UseFactory.o: Factory/UseFactory.cpp
	$(CC) $(CFLAGS) $(INC) -o Factory/UseFactory.o Factory/UseFactory.cpp

####################################
##### Build the Vector Example #####
cleanVector:
	$(RMFORCE) Vector/UseVector.o
	$(RMFORCE) Vector/libUseVector.a
	$(RMFORCE) ../obj/libUseVector.a
	
../obj/libUseVector.a: Vector/UseVector.o ../obj/libUseInheritance.a ../obj/libUseEnumeration.a
	ar rvs Vector/libUseVector.a Vector/UseVector.o
	cp Vector/libUseVector.a ../obj
	
Vector/UseVector.o: Vector/UseVector.cpp
	$(CC) $(CFLAGS) $(INC) -o Vector/UseVector.o Vector/UseVector.cpp

####################################
##### Build the Deque Example #####
cleanDeque:
	$(RMFORCE) Deque/UseDeque.o
	$(RMFORCE) Deque/libUseDeque.a
	$(RMFORCE) ../obj/libUseDeque.a
	
../obj/libUseDeque.a: Deque/UseDeque.o ../obj/libUseInheritance.a ../obj/libUseEnumeration.a
	ar rvs Deque/libUseDeque.a Deque/UseDeque.o
	cp Deque/libUseDeque.a ../obj
	
Deque/UseDeque.o: Deque/UseDeque.cpp
	$(CC) $(CFLAGS) $(INC) -o Deque/UseDeque.o Deque/UseDeque.cpp
