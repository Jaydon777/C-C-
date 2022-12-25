#include <iostream>
#include <string>

using namespace std;

class Attendance{
    private:
        string name;
        int roll_no;
        float percent;
    public:
    void get_details(string s, int r, float p);
    Attendance();
    void show_details();
    float get_attendance(){
        return percent;
    }
};

Attendance::Attendance(){
            name = "None";
            roll_no = 0;
            percent = 0.0;
}

void Attendance::get_details(string s, int r, float p){
        name = s;
        roll_no = r;
        percent = p;
}

void Attendance :: show_details(){
    cout << "Name: " << name << endl;
    cout << "Roll Number: "<< roll_no << endl;
    cout << "Percentage: " << percent <<  endl;  
}

int main(){
    int n;
    cin >> n;
    Attendance classx[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        int r;
        float p;
        cin >> s >> r >> p;
        classx[i].get_details(s,r,p);
    }
    for (int i = 0; i < n; i++)
    {
        classx[i].show_details();
    }
    
    return 0;
}