#include<iostream>
using namespace std;

int addn(int x, int y); // Forward Declaration

int main()
{
    int a, b, c;
    cout<<"Enter two numbers ";
    cout<<"a = ";
    cin>>a; 
    cout<<"b = ";
    cin>>b; 
    cout<<"The addition of 2 numbrs is : "<<addn(a,b);  //      functiton call of addn function.

    return 0;

}
int addn(int x, int y)
{
    int z;
    z=x+y;
    
}