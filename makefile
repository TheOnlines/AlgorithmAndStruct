CC = gcc

main:library/Builder/singleLinkedList.o library/Builder/doubleLinkedList.o library/Builder/Stack.o library/Builder/SortingAlgorithm.o
	$(CC) main.c library/Builder/singleLinkedList.o library/Builder/Stack.o library/Builder/doubleLinkedList.o library/Builder/SortingAlgorithm.o -o main

library/Builder/singleLinkedList.o:library/LinkList/singleLinkedList.c library/LinkList/singleLinkedList.h
	$(CC) -c library/LinkList/singleLinkedList.c -o library/Builder/singleLinkedList.o

library/Builder/doubleLinkedList.o:library/LinkList/doubleLinkedList.c library/LinkList/singleLinkedList.h
	$(CC) -c library/LinkList/doubleLinkedList.c -o library/Builder/doubleLinkedList.o

library/Builder/Stack.o:library/Stack/Stack.c library/Stack/Stack.h
	$(CC) -c library/Stack/Stack.c -o library/Builder/Stack.o

library/Builder/SortingAlgorithm.o:library/SortingAlgorithm/SortingAlgorithm.c library/SortingAlgorithm/SortingAlgorithm.h
	$(CC) -c library/SortingAlgorithm/SortingAlgorithm.c -o library/Builder/SortingAlgorithm.o


