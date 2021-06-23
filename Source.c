#include <stdio.h>
#include "Header.h"
int main()
{
    char arr_1[1000];
    printf("input string: ");
    fgets(arr_1, sizeof(arr_1), stdin);
    int len = 0;
    int i = 0;
    int j = 0;
    while (arr_1[len] != '\0') {
        len++;
    }
    i = len;
    int p = 0;
    while (i >= j) {
        if ((!(arr_1[i] >= 'A') && (arr_1[i] <= 'Z')) || (!(arr_1[i] >= 'a') && (arr_1[i] <= 'z'))) { //Символы
            print_word(arr_1, &i);   // Вызов функции, печатающей слова
            i = skipp_symbol(arr_1, &i);    // Вызов функции, удаляющей символы между словами
            printf("\n");
        }
        if (i == j) {
            last_word(arr_1);   // Вызов функции, выводящей на экран последнее слово
        }
        i--;
    }
    return 0;
}