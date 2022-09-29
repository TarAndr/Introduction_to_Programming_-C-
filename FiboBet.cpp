#include <iostream>

int main() {
    
    int n, a = 0, b = 1;
    
    std::cin >> n;
    
    while (n--) {
        b += a;
        a = b - a;
    }
    
    std::cout << a;
    
    return 0;
}
