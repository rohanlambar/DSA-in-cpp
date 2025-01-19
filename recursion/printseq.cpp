/*
let main sequence be [3,1,2]
subsequences are
3 1 2
3 1
3 2
3
1 2
1
2
{}
*/
#include<bits/stdc++.h>
using namespace std;
void print(int ind,int arr[],vector<int> &v,int n)
{
    if(ind==n)
    {
        for(auto it: v)
        cout<<it<<" ";
        cout<<endl;
        return ;
    }
    v.emplace_back(arr[ind]);
    print(ind+1,arr,v,n);
    v.pop_back();
    print(ind+1,arr,v,n);
}


int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int> v; 
    print(0,arr,v,n);
    return 0;
}