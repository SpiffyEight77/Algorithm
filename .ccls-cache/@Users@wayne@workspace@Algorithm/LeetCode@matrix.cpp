#include <bits/stdc++.h>

using namespace std;

int main() {
    //vector<vector<int>> matrix {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> matrix {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<bool> row(matrix.size());
    vector<bool> col(matrix.begin()->size());

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (!matrix[i][j]) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
