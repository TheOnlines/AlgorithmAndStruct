CC = gcc

main:library/Builder/singleLinkedList.o library/Builder/doubleLinkedList.o
	$(CC) main.c library/Builder/singleLinkedList.o library/Builder/doubleLinkedList.o -o main

library/Builder/singleLinkedList.o:library/LinkList/singleLinkedList.c library/LinkList/singleLinkedList.h
	$(CC) -c library/LinkList/singleLinkedList.c -o library/Builder/singleLinkedList.o

library/Builder/doubleLinkedList.o:library/LinkList/doubleLinkedList.c library/LinkList/singleLinkedList.h
	$(CC) -c library/LinkList/doubleLinkedList.c -o library/Builder/doubleLinkedList.o
