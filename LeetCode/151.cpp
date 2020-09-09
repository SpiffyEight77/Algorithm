#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "the sky is blue";

    string tmp, ans;
    bool f = false;
    int l, r;
    l = 0;
    r = s.size() - 1;

    reverse(s.begin(), s.end());

    while (s[l] == ' ')
        l++;
    while (s[r] == ' ')
        r--;
    for (int i = l; i <= r; i++) {
        if (s[i] != ' ') {
            tmp += s[i];
        }
        if ((s[i] == ' ' && s[i] != s[i - 1]) || i == r) {
            reverse(tmp.begin(), tmp.end());
            if (f) {
                ans += ' ';
                ans += tmp;
            } else {
                ans += tmp;
                f = true;
            }
            tmp = "";
        }
    }
    cout << ans << endl;
    return 0;
}
