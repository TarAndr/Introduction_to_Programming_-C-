﻿/******************************************************************************

Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные

Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные

Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.

Sample Input:

3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:

Markov Valeriy
Petrov Petr
Sergey Petrov

*******************************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    multimap <int, string> STUD;
    
    cin >> n;
    
    while(n--) {
        int mat, fiz, inf;
        string l_name, f_name;
        cin >> l_name >> f_name >> mat >> fiz >> inf;
        STUD.insert({-(mat + fiz + inf), l_name + ' ' + f_name});
    }
    
    for (auto i : STUD) {
        cout << i.second << endl;
    }
    
    return 0;
}
