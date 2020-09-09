#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 { 7, 4 };
    vector<int> nums2 { 5, 2, 8, 9 };

    long long ans = 0;
    map<long long, int> ma;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = i + 1; j < nums1.size(); j++) {
            ma[1LL * nums1[i] * nums1[j]]++;
        }
    }

    for (int i = 0; i < nums2.size(); i++) {
        ans += ma[1LL * nums2[i] * nums2[i]];
    }

    ma.clear();
    for (int i = 0; i < nums2.size(); i++) {
        for (int j = i + 1; j < nums2.size(); j++) {
            ma[1LL * nums2[i] * nums2[j]]++;
        }
    }

    for (int i = 0; i < nums1.size(); i++) {
        ans += ma[1LL * nums1[i] * nums1[i]];
    }
    cout << ans << endl;
    return 0;
}
