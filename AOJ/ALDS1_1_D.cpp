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
