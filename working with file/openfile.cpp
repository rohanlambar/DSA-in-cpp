//opening file and performing read and write operation 
// using constructor method of writing  and reading file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filewrite("text");
    string name;
    int cost;
    cout<<"enter the name of book"<<endl;
    cin>>name;

    cout<<"enter the cost of book"<<endl;
    cin>>cost;
    filewrite<<name;
    filewrite<<endl;
    filewrite<<cost;
    filewrite.close();
    ifstream fileread("text");
    string readname;
    int readcost;
    fileread>>readname;
    fileread>>readcost;
    cout<<"reading from file"<<endl;
    cout<<readname<<endl;
    cout<<readcost<<endl;
    return 0;
}
