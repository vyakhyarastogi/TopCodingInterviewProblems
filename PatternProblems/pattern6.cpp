#include <iostream>
using namespace std;

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{

    int t;
    cout << "enter number of test cases:";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cout << "enter the number of rows:";
        cin >> n;

        pattern6(n);
    }
}