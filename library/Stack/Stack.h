//
// Created by zhaowei on 2021/10/14.
//

#ifndef ALGORITHM_STACK_H
#define ALGORITHM_STACK_H

typedef int BASE;

typedef struct Node *nodeLink;

struct Node {
    nodeLink prev;
    BASE value;
    nodeLink next;
};

typedef struct Stack {
    nodeLink head;
    nodeLink tail;
} StackList,*StackPoint;

StackPoint createStack();

void pushStack(StackPoint stack,BASE value);

void popHead(StackPoint stack);
void popTail(StackPoint stack);
#endif //ALGORITHM_STACK_H1