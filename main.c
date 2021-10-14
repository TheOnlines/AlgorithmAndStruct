#include <stdio.h>

#include "library/LinkList/linkedList.h"
#include <stdlib.h>

int main() {

    pLikedList list = (pLikedList) malloc(sizeof(struct linkedList));
    list->value = 0;
    list->next = NULL;

    createSingleLikedList(list, 10);
    show(list);

    return 0;
}