#include <stdio.h>

#include "library/LinkList/singleLinkedList.h"
#include <stdlib.h>

int main() {

    dLikedList list = (dLikedList) malloc(sizeof(struct doubleLinkedList));
    list->prev = NULL;
    list->value = 0;
    list->next = NULL;

    createDoubleLikedList(list, 10);

    dshow(list);

    return 0;
}