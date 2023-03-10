#include<iostream>
#include<stdlib.h>

using namespace std;

class sample;
{
   int a,b,x,y;
   public:
   sample()
   {
       cout<<"Hello";
   }
   sample(int a,int b)
   {
       x=a;
       y=b;
   }

int total()
{
    cout<<"\n\t sum x+y : "<<x+y;
}

};

int main()
{
    
    system("clr");
    sample s1;
    sample s1(10,20);
    s1.total();
    return 0;
}