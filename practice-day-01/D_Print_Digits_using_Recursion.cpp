#include <bits/stdc++.h>
using namespace std;

void print_digit(long long int n)
{
    if (n == 0)
        return;
    print_digit(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 0)
        {
            cout << "0";
        }
        else
        {
            print_digit(n);
        }
        cout << endl;
    }
    return 0;
}