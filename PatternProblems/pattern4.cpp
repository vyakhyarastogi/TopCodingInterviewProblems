/* pattern4: 1
          2 2
          3 3 3
          4 4 4 4
          5 5 5 5 5 */

#include <iostream>
using namespace std;

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
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

        pattern5(n);
    }
}