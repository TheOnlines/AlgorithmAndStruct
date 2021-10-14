//
// Created by zhaowei on 2021/10/13.
//
#ifndef ALGORITHM_LINKTABLE_H
#define ALGORITHM_LINKTABLE_H

typedef int Integer;

typedef struct singleLinkedList *pLikedList;

typedef struct doubleLinkedList *dLikedList;

/**
 * 单链
 */
struct singleLinkedList {
    Integer value;
    pLikedList next;
};

/**
 * 双链
 */
struct doubleLinkedList {
    dLikedList prev;
    Integer value;
    dLikedList next;
};

void createSingleLikedList(pLikedList list, int length);

void createDoubleLikedList(dLikedList list, int length);

void show(pLikedList list);
void dshow(dLikedList list);
#endif //ALGORITHM_LINKTABLE_H
