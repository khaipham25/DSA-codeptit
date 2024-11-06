#include <bits/stdc++.h>
using namespace std;

vector<string> result;

bool isValid(string num) {
    for (int i = 1; i < num.size(); ++i) {
        if (abs(num[i] - num[i-1]) == 1) {
            return false;
        }
    }
    return true;
}
\
void generateNumbers(int N) {
    string num = "";
    for (int i = 1; i <= N; ++i) {
        num += to_string(i);
    }
    result.clear();
    do {
        if (isValid(num)) {
            result.push_back(num);
        }
    } while (next_permutation(num.begin(), num.end()));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        generateNumbers(N);
        for (const string& num : result) {
            cout << num << endl;
        }
        cout << endl; 
    }
    return 0;
}

