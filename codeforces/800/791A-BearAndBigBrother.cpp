#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int count = 0;
    int i = 1;
    while (i)
    {
        a = a * 3;
        b = b * 2;
        count++;
        if (a > b)
        {
            break;
        }
    }
    cout << count;
    return 0;
}