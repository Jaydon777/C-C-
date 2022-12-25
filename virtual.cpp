#include<iostream>
#include<string>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"in show base"<<endl;
    }
};
class der1:public Base{
    public:
    void show(){
        cout<<"in show derived 1"<<endl;
    }
};
class der2:public Base{
    public:
    void show(){
        cout<<"in show derived 2"<<endl;
    }
};

int main(){
    Base b;
    Base *p;
    der1 d1;
    der2 d2;
    p=&b;
    p->show();
    p=&d1;
    p->show();
    p=&d2;
    p->show();
    return 0;
}