//implementation of quick sort 
/*
time complexity of quick sort O(nlogn)
space complexity of quick sort O(1)

*/
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void quicksort(int arr[],int low,int high)
{
   if(low<=high)
   {
   int  pivot=arr[low];
int i=low;
int j=high;
while(i<j)
{
    while(arr[i]<=pivot && i<high) i++;
    while(arr[j]>pivot && j>low)j--;
    if(i<j)
    swap(&arr[i],&arr[j]);
}
swap(&arr[j],&arr[low]);
quicksort(arr,low,j-1);
quicksort(arr,j+1,high);
   }
}
int main()
{
int arr[]={5,4,3,2,1};
int n= sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);
int i;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;

}
