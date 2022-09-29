#include <iostream>

using namespace std;

int main() {

    int i_from, j_from, i_to, j_to;
  
    cin >> i_from >> j_from >> i_to >> j_to;
  
    if((i_from - i_to) * (i_from - i_to) == (j_from - j_to) * (j_from - j_to)) {
        cout << "YES" << endl;
    } else {
            cout << "NO" << endl;
    }
  
  return 0;
}
