#include<iostream>
#include<string>
using namespace std;

class Player{
    public:
    string name;
    int xp;
    int health;

    public:
    Player(string name_val,int xp_val,int health_val){
    name = name_val;
    xp = xp_val;
    health = health_val;
    }

    void get();
};
void Player::get()
    {
        cout<<name<<endl;
    }


int main(){
    Player hello{"NONE",10,12};
    hello.get();
    return 0;
}