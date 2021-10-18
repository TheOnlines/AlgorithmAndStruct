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

/**
 *  快排
 *  空间复杂度: O(1)
 *  时间复杂度: O(nlog(n))
 */
void quick(int *list, int left, int right) {
    if (left < right) {
        int l = left, r = right, x = list[left];
        while (l < r) {
            while (l < r && x <= list[r]) {
                r--;
            }

            if (l < r) {
                list[l++] = list[r];
            }

            while (l < r && x > list[l]) {
                l++;
            }

            if (l < r) {
                list[r--] = list[l];
            }
        }

        list[l] = x;
        quick(list, left, l - 1);
        quick(list, l + 1, right);
    }
}


void merging(int *left, int lLen, const int *right, int rLen) {

    int l = 0, r = 0, j = 0;

    int temp[10];

    while (l < lLen && r < rLen) {
        if (left[l] < right[r]) {
            temp[j++] = left[l++];
        } else {
            temp[j++] = right[r++];
        }
    }

    while (l < lLen){
        temp[j++] = left[l++];
    }

    while (r < rLen){
        temp[j++] = right[r++];
    }

    for (int m = 0; m < (lLen+rLen); ++m) {
        left[m] = temp[m];
    }
}

void MerSort(int value[], int len) {
    if (len > 1) {

        int *left = value;
        int lLen = len / 2;

        int *right = value + lLen;
        int rLen = len - lLen;

        MerSort(left, lLen);
        MerSort(right, rLen);

        merging(left, lLen, right, rLen);
    }
}

void showSorting(int *list, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\n", list[i]);
    }
}