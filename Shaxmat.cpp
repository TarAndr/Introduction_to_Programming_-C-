﻿/******************************************************************************

Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   0   2   0   3
   0   4   0   5   0
   6   0   7   0   8

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m, n, cnt = 1;
   
    cin >> m >> n;
   
    int A[m][n];
   
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }
   
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(((i + 1) + (j + 1)) % 2) {
                continue;
            }
            A[i][j] = cnt++;
        }
    }
   
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }
   
    return 0;
}
