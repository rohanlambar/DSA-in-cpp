#include <bits/stdc++.h>
using namespace std;
#define MAX 100
class heap
{
public:
    int arr[MAX];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int value)
    {
        int index = size + 1;
        size++;
        arr[size] = value;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    int pop()
    {
        int top = arr[1];
        arr[1] = arr[size]; // last node value assign to  root node

        size--; // deleting last node
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            if (left < size && arr[left] > arr[index])
            {
                swap(arr[left], arr[index]);
                index = left;
            }
            else if (right < size && arr[right] > arr[index])
            {
                swap(arr[right], arr[index]);
                index = right;
            }
            else
                return top;
        }
        return top;
    }
};

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= size && arr[largest] < arr[left])
        largest = left;
    if (right <= size && arr[largest] < arr[right])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size)
{
    while (size > 1)
    {
        swap(arr[1], arr[size]);
        size--;

        heapify(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(55);
    h.insert(50);
    h.insert(45);
    h.insert(20);
    h.insert(5);

    h.print();
    int el = h.pop();
    cout << "top element " << el << endl;
    h.print();
    // building heap
    int arr[6] = {-1, 45, 25, 30, 35};
    int size = 4;
    for (int i = size / 2; i > 0; i--)
        heapify(arr, size, i);
    for (int i = 1; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;
    heapSort(arr, size);
    cout << "sorted array" << endl;
    for (int i = 1; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}