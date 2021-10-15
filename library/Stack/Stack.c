//
// Created by zhaowei on 2021/10/14.
//

#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * 创建栈
 * @return
 */
StackPoint createStack() {

    StackPoint list = malloc(sizeof(StackList));
    list->head = NULL;
    list->tail = NULL;

    return list;
}

/**
 * 放到栈尾
 * @param stack
 * @param value
 */
void pushStack(StackPoint stack, BASE value) {

    nodeLink node = (nodeLink) malloc(sizeof(struct Node));
    node->prev = NULL;
    node->value = value;
    node->next = NULL;

    if (stack->head == NULL) {
        stack->head = node;
        stack->tail = node;
        return;
    }

    node->prev = stack->tail;
    stack->tail->next = node;
    stack->tail = node;
}

/**
 * 栈顶
 * @param stack
 */
void popHead(StackPoint stack){

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

/**
 * 栈尾
 * @param stack
 */
void popTail(StackPoint stack){
    if (stack->tail == NULL){
        return;
    }

    while (stack->tail!= NULL) {
        printf("%d\n",stack->tail->value);
        nodeLink pNode = stack->tail->prev;
        free(stack->tail);
        stack->tail = pNode;
    }
}