#include <bits/stdc++.h>
using namespace std;
int main()
{
    string instructions = "GGLLGG";
    int x = 0, y = 0, d = 0;

    for (int i = 0; i < instructions.size(); i++) {
        if (instructions[i] == 'G') {
            if (d == 0) {
                x -= 1;
                y -= 1;
            }
            if (d == 1) {
                y += 1;
            }
            if (d == 2) {
                x += 1;
                y += 1;
            }
            if (d == 3) {
                y -= 1;
            }
        }
        if (instructions[i] == 'L') {
            if (d == 0)
                d = 3;
            else
                d--;
        }
        if (instructions[i] == 'R') {
            if (d == 3)
                d = 0;
            else
                d++;
        }
    }
    if (x == 0 && y == 0) {
        return 1;
    } else {
        return 0;
    }
    return 0;
}
