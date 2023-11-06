#include<bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int profit[], int w, int n) {
    int t[n + 1][w + 1];
    for (int i = 0; i < n + 1; i++) {
        t[i][0] = 0;
    }
    for (int j = 0; j < w + 1; j++) {
        t[0][j] = 0;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < w + 1; j++) {
            if (weight[i - 1] <= j) {
                t[i][j] = max(profit[i - 1] + t[i - 1][j - weight[i - 1]], t[i - 1][j]);
            }
            else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}

int main() {
    int n, w;
    cin >> n >> w;
    int profit[n];
    int weight[n];
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cout << knapsack(weight, profit, w, n);
    return 0;
}
