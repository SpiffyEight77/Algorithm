#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, k, t = 1;
    long long cnt = 0;
    cin >> n;
    vector<int> nums(n);
    vector<int> G;

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    while (t <= n) {
        G.push_back(t);
        t = t * 3 + 1;
    }

    for (int i = G.size() - 1; i >= 0; i--) {
        for (int j = G[i]; j < n; j++) {
            v = nums[j];
            k = j - G[i];
            while (k >= 0 && nums[k] > v) {
                nums[k + G[i]] = nums[k];
                k -= G[i];
                cnt++;
            }
            nums[k + G[i]] = v;
        }
    }

    cout << G.size() << endl;
    for (int i = G.size() - 1; i >= 0; i--) {
        if (i == G.size() - 1)
            cout << G[i];
        else
            cout << " " << G[i];
    }
    cout << endl
         << cnt << endl;
    for (int i = 0; i < n; i++)
        cout << nums[i] << endl;

    return 0;
}
