#include <bits/stdc++.h>

void solve() {
    
    std::string n;
    std::cin >> n;

    if (n.length() <= 10) {
        std::cout << n << std::endl;
    }
    else {
        int truncated_length = n.length()-2;
        std::cout << n[0] << truncated_length << n[length] << std::endl;
    }
}

int main() {
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int t;
    std::cin >> t;
    for (t--) solve();

}
