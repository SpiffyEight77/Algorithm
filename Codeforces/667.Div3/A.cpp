#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, cnt;
    cin >> n;
    while (n--) {
        cnt = 0;
        cin >> a >> b;
        if (abs(a - b) % 10 == 0)
            cout << abs(a - b) / 10 << endl;
        else
            cout << abs(a - b) / 10 + 1 << endl;
    }
    return 0;
}
