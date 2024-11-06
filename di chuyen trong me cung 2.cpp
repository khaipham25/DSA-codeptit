#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll = long long;

vector<string> res;
int n, m;
int a[1005][1005];
bool visited[1005][1005]; // M?ng dánh d?u các ô dã tham

void Try(int x, int y, string s) {
    if (x < 0 || y < 0 || x >= n || y >= n) return; // Ði?u ki?n biên
    if (a[x][y] == 0 || visited[x][y]) return; // Ô không th? di qua ho?c dã tham
    if (x == n - 1 && y == n - 1) { // Ðã d?n dích
        res.push_back(s);
        return;
    }

    visited[x][y] = true; // Ðánh d?u ô hi?n t?i là dã tham

    // Di chuy?n xu?ng
    Try(x + 1, y, s + "D");
    // Di chuy?n lên
    Try(x - 1, y, s + "U");
    // Di chuy?n trái
    Try(x, y - 1, s + "L");
    // Di chuy?n ph?i
    Try(x, y + 1, s + "R");

    visited[x][y] = false; // B? dánh d?u ô hi?n t?i d? th? các du?ng khác
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        res.clear();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                visited[i][j] = false; // Kh?i t?o m?ng dánh d?u
            }
        }
        if (a[0][0] == 1) Try(0, 0, ""); // B?t d?u tìm ki?m t? ô (0, 0) n?u nó có th? di qua
        if (res.empty()) {
            cout << "-1" << endl;
        } else {
            sort(res.begin(), res.end()); // S?p x?p k?t qu? theo th? t? t? di?n
            for (const auto& path : res) {
                cout << path << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

