#include <iostream>
#include <string.h>
using namespace std;

class Account{
    public:
        char cus_name[20];
        int acc_num;
        char acc_type[20];
        int balance;

        void get(){
            cin>>cus_name>>acc_num>>acc_type>>balance;
        }
};

class savings : public Account{
    public:
    void display(){
        cout<<balance<<endl;
    }
    void charge(){
        cout<<"0"<<endl;
    }

};

class current : public Account{
    public:
    void display(){
        cout<<balance<<endl;
    }
    void charge(){
        if(balance<=500){
            balance-=20;
            cout<<"20"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
};


int main(){
    Account a;
    a.get();
    if(strcmp(a.acc_type,"Current")==0){
        current c;
        c.balance=a.balance;
        c.display();
        c.charge();
        c.display();
    }
    else{
        savings s;
        s.balance=a.balance;
        s.display();
        s.charge();
        s.display();
    }
    return 0;

}
