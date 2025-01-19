/*
arr=[1,2,1];
target sum= 2;
we need to find subsequence whose sum is 2;
ans -> [1,1]
     -> [2]
*/
#include<bits/stdc++.h>
using namespace std;
void print(int ind,int arr[],vector<int> &v,int n,int sum)
{
    if(ind>=n)
    {   if(sum==2)
    { for(auto it: v)
    cout<<it <<" ";
    cout<<endl;
    
    } 
return ;
}
    
    v.emplace_back(arr[ind]);
    sum+=arr[ind];
   print(ind+1,arr,v,n,sum);
    v.pop_back();
    sum-=arr[ind];
   print(ind+1,arr,v,n,sum);
    
}


int main()
{
    int arr[]={1,2,1};
    int n=3;
    vector<int> v; 
print(0,arr,v,n,0);
    return 0;
}