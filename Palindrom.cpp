/*

По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные

На вход подается 1 строка без пробелов.

Выходные данные

Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:

kayak
Sample Output:

yes

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool pal = 1;
    string str;
    
    getline(cin, str);
    
    for(int i = 0; i < str.size() / 2; i++) {
        if(str[i] != str[str.size() - i - 1]) {
            pal = 0;
            break;
        }
    }
    
    cout << ((pal) ? "yes" : "no") << endl;
    
    return 0;
}
