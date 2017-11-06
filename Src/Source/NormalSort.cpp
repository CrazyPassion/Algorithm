// Created by vonking on 2017/10/21. Copyright (c) 2017 Steven Fung. All rights reserved.

#include "NormalSort.hpp"

void NormalSort::BubbleSort(int *arr, int size) {
    int tmp = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 1; j < size - i; ++j) {
            if (arr[j - 1] > arr[j])
            {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }

    }
}

void NormalSort::InsertSort(int *arr, int size) {
    for (int i = 1; i < size; ++i) {
        int tmp = arr[i];
        for (int j = i - 1; j >= 0; --j) {
            if (arr[j] > tmp)
            {
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void NormalSort::QuickSort(int *arr, int low, int high) {
    int p = 0;
    if (low < high){
        p = parition(arr, low, high);
        QuickSort(arr,low, p - 1);
        QuickSort(arr, p, high);
    }

}

int NormalSort::parition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot){
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    if (arr[high] < arr[i + 1]){
        int tmp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = tmp;
    }
    return i + 1;
}
