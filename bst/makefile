bst : main.o bst.o
		g++ -o bst main.o bst.o
	
main.o : main.cpp bst.h
		g++ -c main.cpp
bst.o : bst.cpp bst.h
		g++ -c bst.cpp
clean : 
		rm bst main.o bst.o		
