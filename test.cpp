#include<stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
   int a=0,b=1,c,i,n;
   cout<<"\n\t enter the number : ";
   cin>>n;
      for(i=0;i<=n;i++)
   {
       cout<<"\n\t "<<a;
       c=a+b;
       a=b;
       b=c;
       
   }
 return 0;
}