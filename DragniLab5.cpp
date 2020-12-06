#include <stdio.h>
#include <iostream>
#include <string.h>
#include <Windows.h> 

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s[100];
    char m;
    int i, k = 0;
    cout << "Введите строку: \n";
    fgets(s, sizeof s, stdin);
    cout << "\nВведeнная строка: " << s;
    cout << "\nВведите символ:";
    cin >> m;
    if (s[0] == m) k++;
    for (i = 1; i < 100; i++) {
        if (s[i] == m && s[i - 1] == ' ') {
            k++;
        }
    }
    cout << " Количество слов, начинающихся с символа " << m << " = " << k << endl;
    
    system("pause");
    return 0;
}
