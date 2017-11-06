/* Created by vonking on 2017/10/21. Copyright (c) 2017 Steven Fung. All rights reserved. */

#include <gtest/gtest.h>
#include <iostream>
#include "../Src/Include/NormalSort.hpp"

using namespace testing;
using std::cout;

namespace {
    class NormalSortTest : public testing::Test {
    public:
        NormalSortTest() {
        }

        virtual ~NormalSortTest() {

        }
    };
}

TEST_F(NormalSortTest, bubblesort)
{
    int arr[10] = {9, 7, 6, 0, 4, 3, 5, 8, 1, 2};
    int ref[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    NormalSort::BubbleSort(arr, sizeof(arr)/ sizeof(int));
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(ref[i], arr[i]);
    }
}

TEST_F(NormalSortTest, insertsort)
{
    int arr[10] = {9, 7, 6, 0, 4, 3, 5, 8, 1, 2};
    int ref[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    NormalSort::InsertSort(arr, sizeof(arr)/ sizeof(int));
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(ref[i], arr[i]);
    }
}

TEST_F(NormalSortTest, quicksort)
{
    int arr[10] = {9, 7, 6, 0, 4, 3, 5, 8, 1, 2};
    int ref[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    NormalSort::QuickSort(arr, 0, sizeof(arr)/ sizeof(int) - 1);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(ref[i], arr[i]);
    }
}