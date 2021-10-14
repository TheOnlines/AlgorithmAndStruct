CC = gcc

main:library/LinkList/linkedList.o
	$(CC) main.c library/LinkList/singleLinkedList.o -o main

library/LinkList/linkedList.o:library/LinkList/linkedList.c library/LinkList/linkedList.h
	$(CC) -c library/LinkList/linkedList.c -o library/LinkList/linkedList.o
