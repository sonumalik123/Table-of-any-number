#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the table number";
    cin>>a; 
    for(b=1; b<=10; b++)
    cout<< a <<"*"<< b <<"="<<a*b<<endl;
    return 0;
}