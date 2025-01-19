//working with two file country and leader 
// writing and reading from file;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream filewrite;
    filewrite.open("country");
    filewrite<<"United States of America"<<endl;
    filewrite<<"United Kingdom"<<endl;
    filewrite<<"India"<<endl;
    filewrite.close();
    filewrite.open("leader");
    filewrite<<"Joe Biden"<<endl;
    filewrite<<"Rishi Sunak"<<endl;
    filewrite<<"Narendra Modi"<<endl;
    filewrite.close();
    const int size = 100;
    char text[size];
    ifstream fileread;
    fileread.open("country");
    cout<<"content of country file"<<endl;
    while(fileread)
    {
        fileread.getline(text,size);
        cout<<text<<endl;;
    }
    fileread.close();
    fileread.open("leader");
    cout<<"content of leader file"<<endl;
    while(fileread)
    {
        fileread.getline(text,size);
        cout<<text<<endl;;
    }
    fileread.close();
    return 0;



}