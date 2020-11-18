#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, a, b, c, d, res;
    cin >> t;
    while (t--) {
        res = 0;
        cin >> n >> m;
        while (n--) {
            cin >> a >> b;
            cin >> c >> d;
            if (b == c)
                res++;
        }
        if (m % 2 || res == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
