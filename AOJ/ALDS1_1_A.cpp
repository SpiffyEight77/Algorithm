#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, t;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << nums[0];
    for (int i = 1; i < n; i++) {
        cout << " " << nums[i];
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        t = nums[i];
        j = i - 1;
        while (j >= 0 && nums[j] > t) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = t;

        cout << nums[0];
        for (int i = 1; i < n; i++) {
            cout << " " << nums[i];
        }
        cout << endl;
    }
    return 0;
}
