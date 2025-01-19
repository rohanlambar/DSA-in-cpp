// deriving nth fibonnaci term
/*
0 st term =0
1 st term =1
2 st term =1
3 st term =2
4 st term =3
5 st term =5
6 st term =8
7 st term =13
.
.
.
.
*/
#include <bits/stdc++.h>
using namespace std;
long long int fibo(int n, vector<long long int> &dp)
{
  if (dp[n] != -1)
    return dp[n];

  return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}
int main()
{
  int n;
  cout << "enter value" << endl;
  cin >> n;
  vector<long long int> dp(n + 1, -1);
  dp[0] = 0;
  dp[1] = 1;
  cout << " n th term is " << fibo(n, dp) << endl;
  cout << "dp" << endl;
  // for (auto el : dp)
  //   cout << el << " ";
  // cout << endl;
  return 0;
}

/*
eg fibo(4)
                                fibo(4)
                              /         \
                         fibo(3)    +    fibo(2)
                       /      \         /    \
                 fibo(2)  + fibo(1)    fibo(1) +  fibo(0)
               /       \
            fibo(1)  + fibo(0)


            as we know fibo(1)=1;
            fibo(0)=0;



*/
