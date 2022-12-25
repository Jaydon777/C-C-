#include<iostream>
using namespace std;
int main()
{
    int rad=10;
    const float pi=3.14;
    double area,circum;
    area=++pi*rad*rad;
    circum=2*++pi*rad;
    cout"area="<<area<<endl;
    cout<<"circumference"<<circum;
    return 0;
}