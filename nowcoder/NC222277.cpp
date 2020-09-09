#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        nums[i] = i + 1;

    k -= 1;
    while (n > 1) {
        k = (k + m - 1) % n;
        for (int j = k + 1; j < n; j++)
            nums[j - 1] = nums[j];
        n--;
    }
    cout << nums[0] << endl;
    return 0;
}
