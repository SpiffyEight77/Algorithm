#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "  hello world!  ";

    string ss;
    vector<string> ans;
    for (int i = 0; i < s.size(); i++) {
        if (ss.size() && s[i] == ' ') {
            ans.push_back(ss);
            ss = "";
        } else
            ss += s[i];
    }
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}
