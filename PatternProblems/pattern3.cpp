/*pattern3: 1
          1 2
          1 2 3
          1 2 3 4
          1 2 3 4 5 */

#include <iostream>
using namespace std;

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
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
        cout << "enter the number of rows:";
        cin >> n;

        pattern3(n);
    }
}