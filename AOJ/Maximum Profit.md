方法一 暴力

+ 复杂度分析

  时间复杂度O(n^2) 超时

  空间复杂度O(n)

方法二 原地比较局部最大值 rj - ri 左边维护最小值，右边维护最大值进行比较。

```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,maxv,minv;
    cin>>n;
    vector<int> r(n);
    
    for (int i = 0; i < n; i++) {
        cin>>r[i];
    }

    maxv = -2000000000;
    minv = r[0];
    
    for (int i = 1; i < n; i++) { 
        maxv = max(maxv,r[i] - minv);
        minv = min(r[i],minv);
    }
    cout<<maxv<<endl;
    return 0;
}
```

+ 复杂度分析

  时间复杂度O(n)

  空间复杂度O(1)