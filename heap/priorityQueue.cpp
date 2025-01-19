#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int>> pq;
    pq.push({1, 4});
    pq.push({1, 5});
    pq.push({2, 1});
    pq.push({2, 0});
    while (!pq.empty())
    {
        pair<int, int> temp = pq.top();
        pq.pop();
        cout << "{" << temp.first << "," << temp.second << "}" << endl;
        ;
    }
    cout << endl;
    return 0;
}