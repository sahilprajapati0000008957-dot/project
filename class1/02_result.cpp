#include <iostream>
using namespace std;
int main()
{
    int marks = 75;
    if (marks <= 90)
    {
        cout << "grade a" << endl;
    }
    else if (marks <= 80)
    {
        cout << "graide b" << endl;
    }
    else if (marks <= 70)
    {
        cout << "graide c" << endl;
    }
    else
    {
        cout << "fail" << endl;
    }
    return 0;
}
