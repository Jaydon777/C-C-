
    string name;
    int xp;
    int rollno;
    
    // public:
    void get(string val);
    // {
    //     name = val;
    // }
    string display();
    // {
    //     return name;
    // }
};
void Player::get(string val){
    name = val;
}
void Player::display(void){
    return name;
}