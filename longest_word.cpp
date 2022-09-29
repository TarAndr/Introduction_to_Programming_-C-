/*

Найдите в данной строке самое длинное слово и выведите его.

Входные данные

Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные

Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

Sample Input:

Everyone of us has all we need
Sample Output:

Everyone

*/

#include <iostream>
#include <string>

using namespace std;

string longest_word() {
    int index = 0, len = 0, temp = 0;
    string str;
    getline(cin, str);
    str += ' ';
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ') {
            if(i - temp > len) {
                len = i - temp;
                index = temp;
            }
            temp = i + 1;
        }
    }
    string word;
    for(int i = index; i < index + len; i++) {
        word += str[i];
    }
    return word;
}

int main()
{
    cout << longest_word();
    
    return 0;
}
