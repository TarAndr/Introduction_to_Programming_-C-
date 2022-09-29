#include <iostream>

using namespace std;

int main() {
    int h, mm, ss, S;
    
    cin >> S;
    
    h = (S / 3600) % 24;
    mm = (S / 60) % 60;
    ss = S % 60;
    
    cout << h << ":" << mm / 10 << mm % 10 << ":" << ss / 10 << ss % 10;
    
    return 0;
}

