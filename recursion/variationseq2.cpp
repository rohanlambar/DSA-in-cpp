// if we need only one of sub sequence then
/*
arr=[1,2,1];
target sum= 2;
we need to find subsequence whose sum is 2;
ans -> [1,1]
     -> [2]
*/
#include<bits/stdc++.h>
using namespace std;
bool print(int ind,int arr[],vector<int> &v,int n,int sum)
{
    if(ind>=n)
    {   if(sum==2)
    {
        for(auto it: v)
       cout<<it<<" ";
       cout<<endl;
       return true;
    } 
    else
    return false;

    }
    
    v.emplace_back(arr[ind]);
    sum+=arr[ind];
   if(print(ind+1,arr,v,n,sum)==true) return true;
    v.pop_back();
    sum-=arr[ind];
    if(print(ind+1,arr,v,n,sum)==true) return true;
    return false;
}


int main()
{
    int arr[]={1,2,1};
    int n=3;
    vector<int> v; 
    print(0,arr,v,n,0);
    return 0;
}