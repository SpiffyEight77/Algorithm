#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long x, y, k, cnt;
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> x >> y >> k;
        cnt += k / y + (k % y ? 1 : 0) + k / x + (k % x ? 1 : 0) + (k / x + (k % x ? 1 : 0)) * x;
        cout << cnt << endl;
    }
    return 0;
}
