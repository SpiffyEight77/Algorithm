#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a, b, x, y, n, ans1, ans2;
    cin >> t;
    while (t--) {
        cin >> a >> b >> x >> y >> n;
        ans1 = (a - min(a - x, n)) * (b - min((b - y), (n - min(a - x, n))));
        ans2 = (a - min(a - x, n - min(b - y, n))) * (b - min(b - y, n));
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}
