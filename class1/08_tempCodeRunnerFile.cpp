#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a" << a << endl;
    cout << "b" << b << endl;
}