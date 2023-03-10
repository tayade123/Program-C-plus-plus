#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    char name[20]; 
    int a,b,c,d;

    

    cout<<"\n\t Enter Your Name : ";
    cin>>name; 

    cout<<"\n\t Enter Your Age : ";
    cin>>a;

    if (a>=18) 
    {
        cout<<"\n\t Your Voting Vlid";
    }
   else
   {
       cout<<"\n\t Your Voting Not Vlid";
   }   

   return 0;
}