#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");
    char a[100],b[100];
    int i;

    cout<<"\n\t Enter The String : ";
    cin>>a;

    cout<<"\n\t Enter The String : ";
    cin>>b;

    strcpy(a,b);

    cout<<"\n\t COO :  "<<b;


    return 0;


}