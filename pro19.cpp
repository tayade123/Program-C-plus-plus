#include<iostream>
#include<stdlib.h>

using namespace std;

int fact(int n);
int main()
{
    system("cls");
    int f,n,ret;
    cout<<"\n\t enter the value : ";
    cin>>n;

    ret=fact(n);
    cout<<"\n\t Factorial is : "<<ret;
    return 0;
}
int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}