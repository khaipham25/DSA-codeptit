#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

vector<vector<long long>> multiply(vector<vector<long long>> &a, vector<vector<long long>> &b) {
    vector<vector<long long>> c(2, vector<long long>(2));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % mod;
            }
        }
    }
    return c;
}

vector<vector<long long>> power(vector<vector<long long>> &a, long long n) {
    if (n == 1) return a;
    vector<vector<long long>> temp = power(a, n / 2);
    temp = multiply(temp, temp);
    if (n % 2 == 1) temp = multiply(temp, a);
    return temp;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        if (N == 1) {
            cout << "1\n";
            continue;
        }
        vector<vector<long long>> base = {{1, 1}, {1, 0}};
        vector<vector<long long>> result = power(base, N - 1);
        cout << result[0][0] << endl;
    }
    return 0;
}
