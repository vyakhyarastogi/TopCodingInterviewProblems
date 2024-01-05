#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;

    while (n != 0)
    {
        int digit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int approach2(int n)
{
    string x = to_string(n);
    return x.length();
}

int approach3(int n)
{
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int main()
{
    int n;
    cout << "enter the digits:";
    cin >> n;

    cout << "---using approch1----" << endl;
    cout << endl;

    cout << "Number of digits in " << n << " is " << countDigits(n) << endl;

    cout << "--using approach2---" << endl;
    cout << endl;

    cout << "Number of digits in " << n << " is " << approach2(n) << endl;

    cout << "--using approach3---" << endl;
    cout << endl;

    cout << "Number of digits in " << n << " is " << approach3(n) << endl;
}