/*pattern2: *
 **
 ***
 **** */

#include <iostream>
using namespace std;

void pattern2(int n)
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
        cout << "enter number of rows:";
        cin >> n;

        pattern2(n);
    }
}