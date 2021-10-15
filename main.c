#include <stdio.h>

#include "library/Stack/Stack.h"

#include "library/SortingAlgorithm/SortingAlgorithm.h"

void popTailTest();

void popHead();

void popHeadTest();


int main() {
    int list[] = {124, 23, 4123, 4, 124, 124, 12};
    size_t len = sizeof(list) / sizeof(int);
    bubble(list, len);
    showSorting(list, len);
}

/**
 *  栈头出栈
 */
void popHeadTest() {

    StackPoint stack =  createStack();

    pushStack(stack,1);
    pushStack(stack,2);
    pushStack(stack,3);
    pushStack(stack,4);

    popHead(stack);
}

/**
 * 栈尾出栈
 */
void popTailTest() {
    StackPoint stack =  createStack();

    pushStack(stack,1);
    pushStack(stack,2);
    pushStack(stack,3);
    pushStack(stack,4);


    popTail(stack);
}
