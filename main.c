#include <stdio.h>

#include "library/LinkList/singleLinkedList.h"
#include <stdlib.h>

int main() {

    pLikedList list = (pLikedList) malloc(sizeof(struct singleLinkedList));
    list->value = 0;
    list->next = NULL;

    createSingleLikedList(list, 10);
    show(list);

    return 0;
}