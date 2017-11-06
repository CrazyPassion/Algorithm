// Created by vonking on 2017/10/21. Copyright (c) 2017 Steven Fung. All rights reserved.

#pragma once

class NormalSort {
public:
    static void BubbleSort(int *arr, int size);
    static void InsertSort(int *arr, int size);
    static void QuickSort(int *arr, int low, int high);

    static int parition(int *arr, int low, int high);
};
