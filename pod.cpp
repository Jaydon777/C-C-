#include <iostream>
using namespace std;

class product{

    public:
    int price,discount;

    void get(){
        cin<<price<<discount;
    }

};

class cosmetics:public product{
    public:
    void calc(){
        

    }
}