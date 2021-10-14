//
// Created by zhaowei on 2021/10/13.
//
#ifndef ALGORITHM_LINKTABLE_H
#define ALGORITHM_LINKTABLE_H
typedef int BASE;
typedef struct singleLinkedList *pLikedList;

struct singleLinkedList {
    BASE value;
    pLikedList next;
};

void createSingleLikedList(pLikedList list, int length);

void createDoubleLikedList(pLikedList list, int length);

void show(pLikedList list);

#endif //ALGORITHM_LINKTABLE_H
