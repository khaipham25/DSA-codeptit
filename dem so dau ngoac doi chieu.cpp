#include <iostream>
#include <stack>
#include <string>
using namespace std;

int minSwaps(string s) {
    stack<char> st;
    int swap_needed = 0;
    
    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else { 
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                swap_needed++;
                st.push('(');
            }
        }
    }
    return swap_needed + st.size() / 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        cout << minSwaps(S) << endl;
    }
    return 0;
}

