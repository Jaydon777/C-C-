// #include <iostream>
// using namespace std;
// int shape()
// {
//     int r;
//     float area;
//     cin>>r;
//     cout<<"circle\n";
//     area = 3.14*r*r;
//     cout<<area <<endl;
// }
// int shape(int)
// {
//     int s;
//     float area;
//     cin>>s;
//     cout<<"square\n";
//     area = s*s;
//     cout<<area <<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     if(n==0){
//         shape();
//     }
//     else if(n>1){
//         shape(n);
//     }
//     else{
//         cout<<"wrong input";
//     }
// }

#include <iostream>
#include <string>

using namespace std;

 class Emp{

     public:
     
    string name;
    int age;

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        
        if(age>10){
            cout<<"good"<<endl;
        }
    }

    Emp(string nam,int ag){
        name=nam;
        age=ag;

    }

};

int main(){

    Emp employee1 = Emp("Hi",9);
    Emp employee2 = Emp("jei",13);
    employee1.display();
    employee2.display();
}

