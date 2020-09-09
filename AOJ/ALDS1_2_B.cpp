#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min_index, ans = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
        min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_index])
                min_index = j;
        }
        if (min_index != i) {
            swap(nums[i], nums[min_index]);
            ans++;
        }
    }
    cout << nums[0];
    for (int i = 1; i < n; i++) {
        cout << " " << nums[i];
    }
    cout << endl;
    cout << ans << endl;
    return 0;
}
