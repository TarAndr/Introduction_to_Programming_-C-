﻿/******************************************************************************

Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 2 3 4 5
Sample Output:

5 1 2 3 4

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    
    cin >> n;
    
    int A[n];
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    temp = A[n - 1];
    
    for(int i = n - 1; i; i--) {
        A[i] = A[i - 1];
    }
    
    A[0] = temp;
    
    for(auto i : A) {
        cout << i << " ";
    }
    
    return 0;
}
