#include <iostream>
#define pi 3.14
using namespace std;
float mynum(int t)
{
    return pi*t*t;
}
float num2(int o)
{
    return pi*o*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";
    cin>>r;
    cout<<"Area of circle is:"<<mynum(r)<<endl;
    cout<<"perimeter of circle is :"<<num2(r);
    return 0;
}