#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int solve_base(int x, vector<int>& coins) {
    // basic problem of getting a sum of x using the minimum amount of coins
    // uses recursive formulation without memoization 
    if (x < 0) return INFINITY;
    if (x == 0) return 0;
    int best = INFINITY;
    for (auto c : coins) {
        best = min(best, solve_base(x - c, coins) + 1);
    }
    return best;

}

int solve_memoize(int x, vector<int>& coins, vector<bool>& ready, vector<int>& value) {
    // same problem, but with memoization 
    if (x < 0) return INFINITY;
    if (x == 0) return 0;
    if (ready[x]) return value[x];
    int best = INFINITY;
    for (auto c : coins) {
        best = min(best, solve_memoize(x - c, coins, ready, value) + 1);
    }
    value[x] = best;
    ready[x] = true;
    return best;
}

int solve_iter(int n, vector<int>& coins) {
    // same problem again, but iteratively
    vector<int> value(n + 1);

    value[0] = 0;
    for (int x = 1; x <= n; x++) {
        value[x] = INFINITY;
        for (auto c : coins) {
            if (x - c >= 0) {
                value[x] = min(value[x], value[x - c] + 1);
            }
        }
    }
    return value[n];
}

int solve_construct(int n, vector<int>& coins) {
    // same problem again, but with the addition of printing out a construction 
    // of the minimum soln
    vector<int> value(n + 1);
    vector<int> first(n + 1);

    value[0] = 0;
    for (int x = 1; x <= n; x++) {
        value[x] = INFINITY;
        for (auto c : coins) {
            if (x - c >= 0 && value[x - c] + 1 < value[x]) {
                value[x] = value[x - c] + 1;
                first[x] = c;
            }
        }
    }

    int curr = n;
    while (curr > 0) {
        cout << first[curr] << '\n';
        curr -= first[curr];
    }
    return value[n];
}

int solve_count(int n, vector<int>& coins) {
    // a variation of the problem where we must now count the number of solutions to the problem
    vector<int> count(n + 1);

    count[0] = 1;
    for (int x = 1; x <= n; x++) {
        for (auto c : coins) {
            if (x - c >= 0) {
                count[x] += count[x - c];
                // count[x] %= m;
            }
        }
    }
    return count[n];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // printf("%.4f\n", x);

    return 0;
}