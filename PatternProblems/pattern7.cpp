// pyramid pattern

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "enter the number of test cases:";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cout << "enter the rows:";
        cin >> n;

        pattern(n);
    }
}