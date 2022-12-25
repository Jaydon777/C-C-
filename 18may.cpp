// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10,b=20;
//     const int *const p=&a;
//     cout<<a<<""<<*p<<""<<b<<endl;
//     a=20;
//     cout<<a<<""<<*p<<""<<b<<endl;
//     *p=30;
//     cout<<a<<""<<*p<<""<<b<<endl;
//     p=&b;
//     cout<<a<<""<<*p<<""<<b<<endl;
//     b=60;
//     cout<<a<<""<<*p<<""<<b<<endl;
//     *p=70;
//     return 0;
// }

#include<iostream>
using namespace std;
int mystrlen(char *p){
    int i;
    for(i=0;*(p+i)!='/0';i++);
    (*p)++;
    return i;
}
int main(){
    char city[10]="delhi"
    int x;
    x = mystrlen(city);
    cout<<"city is"<<city<<endl;
    cout<<"its length is"<<x<<endl;
    return 0;
}