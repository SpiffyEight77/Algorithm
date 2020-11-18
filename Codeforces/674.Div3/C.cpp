#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, res, s;
    cin >> t;
    while (t--) {
        res = 0;
        cin >> n;
        s = sqrt(n);
        if (s * s == n) {
            res = s - 1 + n / s - 1;
        } else {
            res = sqrt(n) + n / sqrt(n) - 1;
        }
        cout << res << endl;
    }
    return 0;
}
