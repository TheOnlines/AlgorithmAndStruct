#include <stdio.h>

#include "library/Stack/Stack.h"

void popTailTest();

void popHead();

void popHeadTest();

int main() {

    popTailTest();

    popHeadTest();

    return 0;
}

/**
 *  栈尾出栈
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
