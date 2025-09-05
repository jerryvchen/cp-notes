#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void merge_sort(vector<int>& a) {
    // base case
    if (a.size() == 1) return;

    // recursive case
    int k = a.size() / 2;
    vector<int> l(a.begin(), a.begin() + k);
    vector<int> r(a.begin() + k, a.end());
    merge_sort(l);
    merge_sort(r);

    // merge the two together
    int i = 0;
    int li = 0;
    int ri = 0;
    while (li < l.size() && ri < r.size()) {
        if (l[li] < r[ri]) {
            a[i] = l[li];
            li++;
        }
        else {
            a[i] = r[ri];
            ri++;
        }
        i++;
    }
    while (li < l.size()) {
        a[i] = l[li];
        i++;
        li++;
    }
    while (ri < r.size()) {
        i++;
        ri++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // printf("%.4f\n", x);

    vector<int> a = {1, 1, 5, 2, 3, 1, 4};
    merge_sort(a);
    for (auto elem : a) cout << elem << ' ';
    cout << '\n';

    return 0;
}