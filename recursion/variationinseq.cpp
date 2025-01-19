//if only count is asked insted of sequences 
/*
arr=[1,2,1];
target sum= 2;
we need to find subsequence whose sum is 2;
ans -> [1,1]
     -> [2]
*/
#include<bits/stdc++.h>
using namespace std;
int print(int ind,int arr[],vector<int> &v,int n,int sum)
{
    if(ind>=n)
    {   if(sum==2)
    {
        
       return 1;
    } 
    else
    return 0;

    }
    
    v.emplace_back(arr[ind]);
    sum+=arr[ind];
    int first=print(ind+1,arr,v,n,sum);
    v.pop_back();
    sum-=arr[ind];
    int second =print(ind+1,arr,v,n,sum);
    return first+second;
}


int main()
{
    int arr[]={1,2,1};
    int n=3;
    vector<int> v; 
    cout<<print(0,arr,v,n,0);
    return 0;
}