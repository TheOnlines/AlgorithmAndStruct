#include <stdio.h>

#include "library/SortingAlgorithm/SortingAlgorithm.h"

int main(){

    int list[] = {1,1,2,3,3,3,4,5,6,7,7,8,9,9,14};

    //    printf("%d",equalValuesAppearForTheFirstTime(list,sizeof(list)/sizeof(int),7));
    //    printf("%d",list[gteValuesAppearForTheFirstTime(list,sizeof(list)/sizeof(int),13)]);
    printf("%d",list[lteValuesAppearForTheFirstTime(list,sizeof(list)/sizeof(int),7)]);

    //    printf("%d",equalValuesAppearForTheLastTime(list,sizeof(list)/sizeof(int),3));

}

