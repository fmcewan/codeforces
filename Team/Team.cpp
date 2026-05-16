#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <cmath>

void solve() {

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> grid(n, std::vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> grid[i][j];
        }
    }
    
    int out = 0;
    for (auto &row : grid) {
        int sum = 0;
        for (int x : row) sum += x;
        std::cout << sum << std::endl;
        if (sum >= 2) out += 1;
    }

    std::cout << out << std::endl;

}

int main() {
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    solve();

}
