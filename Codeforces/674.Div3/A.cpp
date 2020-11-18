#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        if (n <= 2) {
            cout << 1 << endl;
            continue;
        }
        int begin = 3, end, f = 2;
        while (1) {
            if (n >= begin && n <= (f - 1) * x + 2) {
                cout << f << endl;
                break;
            }
            begin = x + begin;
            end = f * x + 2;
            f++;
        }
    }
    return 0;
}
