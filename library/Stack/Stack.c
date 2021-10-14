//
// Created by zhaowei on 2021/10/14.
//

#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 * @return
 */
StackPoint createStack() {

    StackPoint list = malloc(sizeof(StackList));
    list->head = NULL;
    list->tail = NULL;

    return list;
}

/**
 *
 * @param stack
 * @param value
 */
void pushStack(StackPoint stack, BASE value) {

    nodeLink node = (nodeLink) malloc(sizeof(struct Node));
    node->value = value;
    node->next = NULL;

    if (stack->head == NULL) {
        stack->head = node;
        stack->tail = node;
        return;
    }

    stack->tail->next = node;
    stack->tail = node;
}

void pop(StackPoint stack){

    if (stack->head == NULL){
        return;
    }

    while (stack->head != NULL) {
        printf("%d\n",stack->head->value);
        nodeLink pNode = stack->head->next;
        free(stack->head);
        stack->head = pNode;
    }
}