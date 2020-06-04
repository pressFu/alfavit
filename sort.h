#include <string.h>
#include <iostream>
void sort(char* str, int* kol, int N) {
    for (int j = N - 1; j > 0; j--)
        for (int i = 0; i < j; i++)
            if (strcmp(&str[kol[i]], &str[kol[i + 1]]) > 0)
            {
                int t = kol[i];
                kol[i] = kol[i + 1];
                kol[i + 1] = t;
            }
}

