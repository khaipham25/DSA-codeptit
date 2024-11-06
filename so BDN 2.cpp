#include <iostream>
#include <queue>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            break;
        }
        queue<ll> q;
        q.push(1);
        while (true) {
            ll fr = q.front();
            q.pop();
            if (fr % n == 0) {
                cout << fr << endl;
                break;
            }
            q.push(fr * 10);
            q.push(fr * 10 + 1);
        }
    }
    return 0;
}

