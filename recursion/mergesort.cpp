/*
merge sort is a efficient algorithm to find a sorted array
it works on divide and conquer technique;

time complexity =O(nlog2n)
space complexity=O(n)



*/
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int n = high - low + 1;
    int temp[n], i = 0;
    int first = low;
    int second = mid + 1;
    while (first <= mid && second <= high)
    {
        if (arr[first] <= arr[second])
        {
            temp[i] = arr[first];
            i++;
            first++;
        }
        else
        {
            temp[i] = arr[second];
            i++;
            second++;
        }
    }
    while (first <= mid)
    {
        temp[i] = arr[first];
        i++;
        first++;
    }
    while (second <= high)
    {
        temp[i] = arr[second];
        i++;
        second++;
    }

    for (i = low; i <= high; i++)
        arr[i] = temp[i - low];
}
void mergesort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {3, 2, 1, 5, 3, 7, 8, 5, 6, 7, 23, 45, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}