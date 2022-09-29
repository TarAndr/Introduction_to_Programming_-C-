﻿/******************************************************************************

Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина




где


- среднее значение последовательности.
Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

Формат входных данных

Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания). В последовательности не менее двух чисел до 0.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

4.16333199893

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long x, i = 0;
    double Sigma = 0, Sum = 0;
    
    while(cin >> x && x) {
        i++;
        Sum += x;
        Sigma += pow(x, 2);
    }
    
    Sum = pow(Sum, 2) / i;
    Sigma = sqrt((Sigma - Sum) / (i - 1));
    
    cout << setprecision(11) << fixed;
    cout << Sigma << endl;
    
    return 0;
}
