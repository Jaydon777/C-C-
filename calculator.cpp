#include <iostream>
using namespace std;

class cal{
    private:
    float operand1;
    float operand2;
    
    char op;

    public:
    int result;
    void get_data(){
        cin >> operand1;
        cin >> operand2;
        cin >> op;
    }

    int show_result(){
        switch (op)
        {
        case '+':
            result = (operand1+operand2);
            return result;
            break;
        case '-':
            result = (operand1-operand2);
            return result;
            break;
        case '*':
            result = (operand1*operand2);
            return result;
            break;
        case '/':
            result = (operand1/operand2);
            return result;
            break;
        default:
            cout<< "Invalid INPUT!!"<<endl;
        }
    }
};

int main(){
    cal num;
    num.get_data();
    cout<<num.show_result()<<endl;
    return 0;
}