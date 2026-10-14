#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 13;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "index:<<" << i << "," << j << endl;
                cout << "values:" << arr[i] << "," << arr[j];
                return 0;
            }
        }
    }
    cout << "no pair found";
    return 0;
}
