#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void counting_sort(vector<int>& a) {
    // use a bookkeeping array
    int max_elem = *max_element(a.begin(), a.end());
    vector<int> count(max_elem + 1, 0);
    for (auto x : a) count[x]++;

    int curr = *min_element(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        a[i] = curr;
        count[curr]--;
        while (count[curr] <= 0) curr++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // printf("%.4f\n", x);
    vector<int> a = {5, 2, 3, 1, 4, 2, 2, 1, 4, 3, 3, 3, 3};
    counting_sort(a);
    for (auto elem : a) cout << elem << ' ';
    cout << '\n';

    return 0;
}