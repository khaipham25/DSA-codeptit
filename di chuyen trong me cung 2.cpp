#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll = long long;

vector<string> res;
int n, m;
int a[1005][1005];
bool visited[1005][1005]; // M?ng d�nh d?u c�c � d� tham

void Try(int x, int y, string s) {
    if (x < 0 || y < 0 || x >= n || y >= n) return; // �i?u ki?n bi�n
    if (a[x][y] == 0 || visited[x][y]) return; // � kh�ng th? di qua ho?c d� tham
    if (x == n - 1 && y == n - 1) { // �� d?n d�ch
        res.push_back(s);
        return;
    }

    visited[x][y] = true; // ��nh d?u � hi?n t?i l� d� tham

    // Di chuy?n xu?ng
    Try(x + 1, y, s + "D");
    // Di chuy?n l�n
    Try(x - 1, y, s + "U");
    // Di chuy?n tr�i
    Try(x, y - 1, s + "L");
    // Di chuy?n ph?i
    Try(x, y + 1, s + "R");

    visited[x][y] = false; // B? d�nh d?u � hi?n t?i d? th? c�c du?ng kh�c
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
                visited[i][j] = false; // Kh?i t?o m?ng d�nh d?u
            }
        }
        if (a[0][0] == 1) Try(0, 0, ""); // B?t d?u t�m ki?m t? � (0, 0) n?u n� c� th? di qua
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

