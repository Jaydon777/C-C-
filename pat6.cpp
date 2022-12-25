#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
};

class test : public Student
{
public:
    float m1, m2;
};

class sport : public Student
{
public:
    float score;
};

void calc(test x, sport y)
{
    int result;
    cout << "Total score is" << endl;
    result = x.m1 + x.m2 + y.score;
    cout << result << endl;
    if (result / 300 > 0.75)
    {
        cout << "Admission Accepted" << endl;
    }
    else
    {
        cout << "Admission Denied" << endl;
    }
}

int main()
{
    test t1;
    sport s1;
    cin >> t1.rollno >> t1.m1 >> t1.m2 >> s1.score;
    calc(t1, s1);
}