#include <string.h>
#include <iostream>
#include <Windows.h>
#include "sort.h"
using namespace std;
char str[30000]; // ������ ��� ������
int kolvo[15000];// ������ ��� ����
int N;// ����������� ����
int main() {
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
    int i, j, Flag; // Flag - ����� �����
    cout<<"������� �����: "<<endl;
    gets(str);
    for (N = 0, Flag = 1, i = 0; str[i]; i++) {
        // ������ ������� �� ������ ����� ������
        if (str[i] == ' ') {
            str[i] = 0;
            Flag = 1;
        }
        // ������ �������� ����� ������� � ������ 
        else if (Flag) {
            kolvo[N++] = i;
            Flag = 0;
        }
    }
    // ����������
    sort(str, kolvo, N);
    cout << "����� � ���������� �������: " << endl;
    // �����
    for (i = 0; i < N; i++) {
        cout << i+1 << " " << &str[kolvo[i]] << endl;
    }
}
