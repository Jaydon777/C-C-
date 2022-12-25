#include<iostream>
#include<string>
using namespace std;

class Player{
    public:
    string name;
    int xp;
    void talk(string say);
};
void Player::talk(string s){
    {
        cout<<name<<" says "<<s<<endl;
    }
}
class Account{
    public:
    string name;
    double balance;
    void deposit(double bal);
        
};
void Account::deposit(double bal){
    balance+=bal;
    cout<<"Deposited"<<endl;
}
int main(){
    Player hello;
    hello.name = "frank";
    hello.xp = 100;
    hello.talk("Hello");
    
    Account Frank;
    Frank.name="Frank";
    Frank.balance=1234.12;

    return 0;
}