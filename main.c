#include <stdio.h>

#include "library/LinkList/singleLinkedList.h"
#include "library/Stack/Stack.h"
#include <stdlib.h>

int main() {

    StackPoint stack =  createStack();

    pushStack(stack,1);
    pushStack(stack,2);
    pushStack(stack,3);
    pushStack(stack,4);

    pop(stack);

    return 0;
}