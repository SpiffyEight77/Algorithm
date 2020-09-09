#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--) {
        k = 0;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            if (nums[i])
                k++;
        }
        if (k % 2 == 0) {
            cout << nums.size() << endl;
            for (int i = 0; i < n; i++) {
                if (i)
                    cout << " " << nums[i];
                else
                    cout << nums[i];
            }
            cout << endl;
        } else {
            int zero = 1;
            int one = 1;
            cout << nums.size() - 2 << endl;
            vector<int>::iterator it;
            for (it = nums.begin(); it != nums.end(); it++) {
                if (*it && one) {
                    nums.erase(it);
                    one--;
                }
                if (*it == 0 && zero) {
                    nums.erase(it);
                    zero--;
                }
            }
            for (int i = 0; i < n - 2; i++)
                if (i)
                    cout << " " << nums[i];
                else
                    cout << nums[i];
            cout << endl;
        }
    }
    return 0;
}
