#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");
    char a[20];

    cout<<"\n\t Enter The Number OF A :";
    cin>>a;

    strrev(a);

    cout<< "\n\t REVERES : "<<a;


    return 0;

}