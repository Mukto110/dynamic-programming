#include <bits/stdc++.h>
using namespace std;

void checkReachability(long long n)
{
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    // Try both options before concluding "NO"
    if (n % 10 == 0)
    {
        checkReachability(n / 10);
        return;
    }
    if (n % 20 == 0)
    {
        checkReachability(n / 20);
        return;
    }

    // If neither option works, print NO
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        checkReachability(n);
    }
    return 0;
}
