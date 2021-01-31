#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    char right = matrix[0][0];
    int no = 0;
    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] != right) {
            no++;
        }
    }
    if (no==0) {
        int count = 0;
        for (int i = n - 1; i > -1; --i) {
            if (matrix[count][i] != right) {
                no++;
            }
            count++;
        }
        char letter = matrix[0][1];
        if (no==0 && letter!= matrix[0][0]){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] != letter) {
                    no++;
                }
            }
        }
        if (no > ((n * 2) - 1)) {
            cout << "NO";
        } else cout << "YES";
            } else cout << "NO";
    } else cout << "NO";
}