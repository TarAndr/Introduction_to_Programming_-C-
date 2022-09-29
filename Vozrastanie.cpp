/*
Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
2
1
Sample Output:

1 1 2
*/

#include <iostream>

using namespace std;

int main() {
    int A, B, C, Temp;
  
    cin >> A >> B >> C;
  
    if(A > B) {
        Temp = A;
        A = B;
        B = Temp;
    }
  
    if(A > C) {
        Temp = A;
        A = C;
        C = Temp;
    }
  
    if(B > C) {
        Temp = B;
        B = C;
        C = Temp;
    }
  
    cout << A << " " << B << " " << C << endl;
  
  return 0;
}
