#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num]++;
    }
    for (const auto &[key, value] : mp) {
        if (value == 1) {
            a.push_back(key);
        }
    }
    if (a.size() == 0) {
        cout << 0 << endl;
    } else if (a.size() == 1) {
        cout << a.front() << endl;
    } else {
        cout << a.front() + a.back() << endl;
    }

    return 0;
}
