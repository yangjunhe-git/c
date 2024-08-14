#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N % 2 == 0) {
        return 1;
    }
    int a = N / 2 + 1;
    int b = N / 2;
    for (int i = 0; i < N; ++i) {
        cout << '|';
        if (i == 0 || i == N - 1) {
            for (int j = 1; j < N - 1; ++j) {
                cout << '-';
            }
        }
        else if (i == a) {
            for (int j = 1; j < b; ++j) {
                cout << 'x';
            }
            for (int j = b; j < N - b; ++j) {
                cout << '-';
            }
            for (int j = N - b; j < N - 1; ++j) {
                cout << 'x';
            }
        }
        else {
            for (int j = 1; j < N - 1; ++j) {
                if (j == b) {
                    cout << '|';
                } else {
                    cout << 'x';
                }
            }
        }
        cout << '|' << endl;
    }
    return 0;
}