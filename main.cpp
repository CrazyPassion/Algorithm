#include <iostream>
#include <StringAlgorithm.hpp>
#include <NormalSort.hpp>


using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int arr[10] = {9, 7, 6, 0, 4, 3, 5, 8, 1, 2};
    NormalSort::QuickSort(arr, 0, sizeof(arr)/ sizeof(int) - 1);
    for (int i = 0; i < 10; ++i) {
        cout<<arr[i]<<endl;
    }
    return 0;
}