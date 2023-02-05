#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int a,b;
    system("cls");
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    if(a>b)
        cout<<"a is greater !!"<<"\n";
    else if(b>a)
        cout<<"b is greater !!"<<"\n";
    else 
        cout<<"a is equal to b !!"<<"\n";
    getch();
    return 0;
}