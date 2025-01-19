// crc code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data;
    cout << "Enter the number to transferred " << endl;
    cin >> data;
    int divisor;
    cout << "Enter divisor " << endl;
    cin >> divisor;
    int noOfBits = 0;
    int temp = divisor;
    while (temp != 0)
    {
        temp = temp >> 1;
        noOfBits++;
    }
    cout << noOfBits << endl;
    data = data << (noOfBits - 1);
    int rem = data % divisor;
    data += rem;
    cout << data % divisor << endl;
    if (data % divisor == 0)
        cout << "success";
    else
        cout << "failure" << endl;
}
