CC = gcc

main:library/Builder/linkedList.o
	$(CC) main.c library/Builder/linkedList.o -o main

library/Builder/linkedList.o:library/LinkList/singleLinkedList.c library/LinkList/singleLinkedList.h
	$(CC) -c library/LinkList/linkedList.c -o library/Builder/linkedList.o
