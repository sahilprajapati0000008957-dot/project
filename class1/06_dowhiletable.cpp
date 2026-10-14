#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        cout << i * 2 << endl;
        i++;
        cout << "i=" << i << endl;

    } while (i <= 10);
}