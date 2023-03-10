#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    int i,n;
    cout<<"\n\t Enter The Number : ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
       cout<<"\n\t Your : ";
       if (n%2)
       {
          cout<<"\n\t prime Number "; 
       }
       else{
           cout<<"\n\t Not Prime Number ";
       }
       break;
    }
    return 0;
}