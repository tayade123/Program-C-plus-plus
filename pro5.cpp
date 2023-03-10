#include<iostream>
#include<stdlib.h>
using namespace std ;
 int main()
 { 
     system("cls");
    int i,n;
    cout <<"\n\t Enter The Number : ";
    cin>>n;
    for ( i = 2; i <= n; i++)
    {       
        if(n%i==0)
        {
            break;
        }
    }
      if(i == n)
    {
        cout<<"\n\t yes prime";
    }
   else 
   {
       cout<<"\n\t not prime";
   }

   cout<<"\n ";
     return 0;
 }