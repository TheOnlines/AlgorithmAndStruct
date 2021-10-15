//
// Created by zhaowei on 2021/10/15.
//
#include "SortingAlgorithm.h"
#include <stdio.h>

/**
 * 空间复杂度O(1)
 * 时间复杂度O(n^2)
 * @param list
 * @param len
 */
void bubble(int *list, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (list[i] > list[j]) {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

/**
 * 空间复杂度:原地排序 O(1)
 * 时间复杂度: O(n^2)
 * @param list
 * @param len
 */
void choice(int *list, int len) {
    for (int i = 0; i < len-1; ++i) {
        int minKey = i;
        for (int j = i + 1; j < len; ++j) {
            if (list[minKey] > list[j]) {
                minKey = j;
            }
        }
        int temp = list[minKey];
        list[minKey] = list[i];
        list[i] = temp;
    }
}

/**
 * 空间复杂度: 原地排序O(1)
 * 时间复杂度: 最坏的情况是O(n)
 * @param list
 * @param len
 */
void insert(int *list, int len) {
    for (int i = 1; i < len; ++i) {
        int currentValue = list[i];
        int prevK = i - 1;
        for (; prevK >= 0; prevK--) {
            if (list[prevK] > currentValue) {
                list[prevK + 1] = list[prevK];
            } else {
                break;
            }
        }
        list[prevK + 1] = currentValue;
    }
}

void showSorting(int *list, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\n", list[i]);
    }
}