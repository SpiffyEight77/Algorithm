#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,cnt = 0;
    cin>>n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if(nums[j] < nums[i]) {
                swap(nums[j],nums[i]); 
                cnt++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<cnt<<endl;
    return 0;
}
