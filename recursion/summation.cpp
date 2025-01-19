//sum of first n natural number
#include<bits/stdc++.h>
using namespace std;
int fact(int i,int n)
{
if(i<1)
printf("%d",n);
else
 fact(i-1,n+i);
}

int main()
{
int n,result;
cin>>n;
result=fact(n,0);

return 0;
}