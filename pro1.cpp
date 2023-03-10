#include<iostream>
using namespace  std;

class lalala
{
    public:
    int a,b,c;

};
int main()
{
    lalala add;
    cout<<"Enter the number of a : ";
    cin>>add.a;
    cout<<"Enter the number of b : ";
    cin>>add.b;

    add.c = add.a + add.b;
    cout<<"sum "<<add.c ;
    return 0 ;
}