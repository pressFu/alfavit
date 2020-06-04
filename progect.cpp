#include <string.h>
#include <iostream>
#include <Windows.h>
#include "sort.h"
using namespace std;
char str[30000]; // Массив для строки
int kolvo[15000];// Массив для слов
int N;// Колличество слов
int main() {
    SetConsoleCP(1251);// Установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // Установка кодовой страницы win-cp 1251 в поток вывода
    int i, j, Flag; // Flag - конец слова
    cout<<"введите текст: "<<endl;
    gets(str);
    for (N = 0, Flag = 1, i = 0; str[i]; i++) {
        // Замена пробела на символ конца строки
        if (str[i] == ' ') {
            str[i] = 0;
            Flag = 1;
        }
        // Запись символов после пробела в массив 
        else if (Flag) {
            kolvo[N++] = i;
            Flag = 0;
        }
    }
    // Сортировка
    sort(str, kolvo, N);
    cout << "Слова в алфавитном порядке: " << endl;
    // Вывод
    for (i = 0; i < N; i++) {
        cout << i+1 << " " << &str[kolvo[i]] << endl;
    }
}
