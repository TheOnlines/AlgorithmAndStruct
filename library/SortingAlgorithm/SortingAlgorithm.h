//
//  Created by zhaowei on 2021/10/15.
//

#ifndef ALGORITHM_SORTINGALGORITHM_H
#define ALGORITHM_SORTINGALGORITHM_H

void bubble(int *list,int len);

void showSorting(int *list, int len);

void choice(int *list,int len);

void insert(int *list,int len);

void quick(int *list, int left, int right);

void sortMerging(int list[], int len);

void merging(int *left, int lLen, int *right, int rLen);

int bSearch(const int pInt[], int len, int v);

/**
 * 终止条件 left > right. 当pInt[md] = value时.
 * bSearchInternally(const int pInt[], int left, int right,int value) = bSearchInternally(const int pInt[], int left, int right,int value)
 *
 * @param pInt
 * @param len
 * @param v
 * @return
 */
int bSearchInternally(const int pInt[], int left, int right,int value);


int equalValuesAppearForTheFirstTime(int list[], int len, int val);

int equalValuesAppearForTheLastTime(int list[], int len, int val);

int gteValuesAppearForTheFirstTime(int list[], int len, int val);

int lteValuesAppearForTheFirstTime(int *list, int len, int val);
#endif //ALGORITHM_SORTINGALGORITHM_H
