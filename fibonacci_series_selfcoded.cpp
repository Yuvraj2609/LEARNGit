#include<iostream>
using namespace std;
static int count=0;
int fib(int n){
    count++;
    int sum;
    if(n<0)
        cout<<"Error !!!";
    else if(n==0)
        return 0;
    else if(n==1)
        return 1;
    sum =fib(n-1)+ fib(n-2);

    return sum;
}
int main()
{
    int a;
    cout<<"Enter the number required to print the fibonnaci series: "<<endl;
    cin>>a;
    cout<<fib(a)<<endl;
    cout<<"count of fib function call is: "<<count<<endl;
    return 0;
}