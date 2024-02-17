#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool canWin(int k, int x, int a) {
    if (k == 1) {
        return true;
    }
    if (x == 1) {
        return a >= k;
    }
    vector<bool> dp(a + 1, false);
    dp[0] = true;
    for (int i = 1; i <= k; ++i) {
        for (int j = max(0, i - k + 1); j <= a; ++j) {
            dp[j] = dp[j] || dp[j - i];
        }
    }
    for (int i = 0; i <= x; ++i) {
        if (dp[a - i * k]) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x, a;
        cin >> k >> x >> a;
        cout << (canWin(k, x, a) ? "YES" : "NO") << endl;
    }
    return 0;
}
