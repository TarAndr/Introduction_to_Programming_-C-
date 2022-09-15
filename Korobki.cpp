/*
Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.
Sample Input 1:

1
2
3
3
2
1
Sample Output 1:

Boxes are equal
Sample Input 2:

2
2
3
3
2
1
Sample Output 2:

The first box is larger than the second one
*/

#include <iostream>

using namespace std;

int main() {
    int A1, B1, C1, A2, B2, C2, Temp;
  
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
  
    if(A1 > B1) {
        Temp = A1;
        A1 = B1;
        B1 = Temp;
    }
  
    if(A1 > C1) {
        Temp = A1;
        A1 = C1;
        C1 = Temp;
    }
  
    if(B1 > C1) {
        Temp = B1;
        B1 = C1;
        C1 = Temp;
    }
    
    if(A2 > B2) {
        Temp = A2;
        A2 = B2;
        B2 = Temp;
    }
  
    if(A2 > C2) {
        Temp = A2;
        A2 = C2;
        C2 = Temp;
    }
  
    if(B2 > C2) {
        Temp = B2;
        B2 = C2;
        C2 = Temp;
    }
    
    if(A1 == A2 && B1 == B2 && C1 == C2) {
        cout << "Boxes are equal" << endl;
    } else
    if(A1 <= A2 && B1 <= B2 && C1 <= C2) {
        cout << "The first box is smaller than the second one" << endl;
    } else
    if(A1 >= A2 && B1 >= B2 && C1 >= C2) {
        cout << "The first box is larger than the second one" << endl;
    } else{
        cout << "Boxes are incomparable" << endl;
    }
    
  return 0;
}
