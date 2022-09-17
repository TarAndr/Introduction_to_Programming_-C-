/******************************************************************************
Дано действительное положительное число a и целоe число n.

Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).

Формат входных данных
Вводится действительное положительное число a и целоe число n.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

2
1
Sample Output 1:

2
Sample Input 2:

2
2
Sample Output 2:

4

*******************************************************************************/

#include <iostream>

using namespace std;

double power(double x, int n) {
    if(!n) {
        return 1;
    }
    return ((n < 0) ? power(x, ++n) / x : x * power(x, --n));
}

int main()
{
    double a;
    int b;
    
    cin >> a >> b;
    
    cout << power(a, b) << endl;
    
    return 0;
}
