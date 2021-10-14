//1
// Created by zhaowei on 2021/10/13.
//

#include "singleLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 * @param list
 * @param length
 */
void createSingleLikedList(pLikedList list, int length) {
    int step = 0;

    while (step < length) {
        step++;

        pLikedList linklist = (pLikedList) malloc(sizeof(struct singleLinkedList));
        linklist->value = step;
        linklist->next = NULL;

        list->next = linklist;
        list = list->next;
    }
}

/**
 *
 * @param list
 * @param len
 */
void show(pLikedList list) {
    while (list->next != NULL) {
        printf("%d\n", list->value);
        list = list->next;
    }
}