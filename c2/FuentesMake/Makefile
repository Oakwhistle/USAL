CC = gcc
OBJS = testord.o metodos.o auxi.o memoria.o
CTAGS = -c -g -Wall

SOURCES = testord.c metodos.c memoria.c auxi.c
HEADERS = auxi.h metodos.h memoria.h


all : testord

testord : $(OBJS)
	$(CC)  $(OBJS) -o testord
    
testord.o : testord.c metodos.h auxi.h memoria.h
	$(CC)  $(CTAGS) testord.c
    
metodos.o : metodos.c metodos.h 
	$(CC)  $(CTAGS) metodos.c
    
memoria.o : memoria.c memoria.h
	$(CC)  $(CTAGS) memoria.c
	
auxi.o : auxi.c auxi.h
	$(CC)  $(CTAGS) auxi.c

proyecto.tar : $(SOURCES) $(HEADERS) Makefile Makefile2
	tar -cvf proyecto.tar $^
clean:
	rm $(OBJS) testord

