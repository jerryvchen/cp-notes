#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void bubble_sort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // printf("%.4f\n", x);

    vector<int> a = {5, 2, 3, 1, 4};
    bubble_sort(a);
    for (auto elem : a) cout << elem << ' ';
    cout << '\n';

    return 0;
}