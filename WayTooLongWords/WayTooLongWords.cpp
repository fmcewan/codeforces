#include <bits/stdc++.h>

void solve() {
    
    std::string n;
    std::cin >> n;

    int length = n.length();

    if (length <= 10) {
        std::cout << n << std::endl;
    }
    else {
        int truncated_length = length-2;
        std::cout << n[0] << truncated_length << n[length-1] << std::endl;
    }
}

int main() {
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int t;
    std::cin >> t;
    while (t--) solve();

}
