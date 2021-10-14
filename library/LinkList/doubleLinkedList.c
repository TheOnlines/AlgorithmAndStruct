//
// Created by zhaowei on 2021/10/14.
//

#include "singleLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void createDoubleLikedList(dLikedList list, int length) {

    for (int i = 0; i < length; ++i) {

        dLikedList dList = (dLikedList) malloc(sizeof(struct doubleLinkedList));

        dList->prev = list;

        dList->value = i;

        dList->next = NULL;

        list->next = dList;

        list = list->next;
    }
}



/**
 *
 * @param list
 * @param len
 */
void dshow(dLikedList list) {

    while (list->next != NULL) {
        printf("next:%d\n", list->value);
        list = list->next;
    }

    while (list->prev != NULL) {
        printf("prev:%d\n", list->value);
        list = list->prev;
    }
}