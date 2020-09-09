#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min_index;
    bool flag = true;
    cin >> n;
    vector<string> nums1(n);
    vector<string> nums2(n);

    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
        nums2[i] = nums1[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j >= i + 1; j--) {
            if (nums1[j][1] < nums1[j - 1][1])
                swap(nums1[j], nums1[j - 1]);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums2[j][1] < nums2[min_index][1])
                min_index = j;
        }
        if (min_index != i)
            swap(nums2[min_index], nums2[i]);
    }

    cout << nums1[0];
    for (int i = 1; i < n; i++) {
        cout << " " << nums1[i];
    }
    cout << endl
         << "Stable" << endl;

    for (int i = 0; i < n; i++) {
        if (nums2[i] != nums1[i])
            flag = false;
        if (i)
            cout << " " << nums2[i];
        else
            cout << nums2[i];
    }
    cout << endl;
    if (flag)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    return 0;
}
