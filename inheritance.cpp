#include <iostream>
using namespace std;

class Box{
    protected:
    int l,b,h;
    public:
    void get(){
        cout <<"Enter values:" << endl;
        cin>>l>>b>>h;
    }

    void display(){
        cout<<l<<b<<h<<endl;
    }
};

class carton:public Box{
    public:
    char name[20];

    void Set(){
        cout<<"Enter name"<<endl;
        cin>>name;
    }

    void show(){
        cout<<name<<endl;
    }
    void volume(){
        cout<<"Volume="<<l*b*h;
    }

};

int main(){
    carton obj;
    obj.get();
    obj.display();
    obj.Set();
    obj.show();
    obj.volume();
    return 0; 


    return 0;
}