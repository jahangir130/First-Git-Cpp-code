#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n, a;
    cin >> n >> a;

    long long count_less = 0;
    long long count_greater = 0;

    for (long long i = 0; i < n; ++i) {
        long long v;
        cin >> v;
        if (v < a) {
            count_less++;
        } else if (v > a) {
            count_greater++;
        }
    }

    if (count_less > count_greater) {
        cout << a - 1 << "\n";
    } else {
        cout << a + 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}