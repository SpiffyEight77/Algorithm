#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> citations { 0, 1, 3, 5, 6 };
    int left = 0, right = citations.size() - 1, mid, ans = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (citations.size() - mid + 1 >= citations[mid]) {
            left = mid + 1;
            ans = max(ans, citations[mid]);
        } else
            right = mid;
    }
    return ans;
}
