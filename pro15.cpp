#include<iostream>
#include<stdlib.h>
using namespace std;

class sample

{
    public:

    int a,b;
    int  add()
    {

    cout<<"\n\t enter the values a and b : ";
    cin>>a>>b;
     
     cout<<"\n\t sum "<<a+b;

    }

   
};

int main()
{
    system("cls");
     sample s ;
    s. add();
   

 //return 0;

}
