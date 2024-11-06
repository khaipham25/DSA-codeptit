#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int dp[10000]={0};
        dp[0] = 1; 
        dp[1];  
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= K && i - j >= 0; ++j) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }

        cout << dp[N] << endl;
    }

    return 0;
}

