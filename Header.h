
int skipp_symbol(char* arr_1, int* f)
{
    int i = *f;
    while ((!(arr_1[i] >= 'A') && (arr_1[i] <= 'Z')) || (!(arr_1[i] >= 'a') && (arr_1[i] <= 'z'))) // Ñêèïàåò ìíîãî ñèìâîëîâ ìåæäó ñëîâàìè
        i--;
    return i;
}
void last_word(char* arr_1)
{
    int j = 0;
    while (((arr_1[j] >= 'A') && (arr_1[j] <= 'Z')) || ((arr_1[j] >= 'a') && (arr_1[j] <= 'z'))) //Áóêâû
    {
        printf("%c", arr_1[j]);
        j++;
    }
}
void print_word(char* arr_1, int *i) {
    int p = *i + 1;
    while (((arr_1[p] >= 'A') && (arr_1[p] <= 'Z')) || ((arr_1[p] >= 'a') && (arr_1[p] <= 'z'))) { //Áóêâû
        printf("%c", arr_1[p]);
        p++;
    }
}
