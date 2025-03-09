//¬вести с консоли строку символов произвольной длины(до 80 символов).
//ѕомен€ть в ней все маленькие символы СaТ и СbТ на заглавные и вывести на консоль полученную строку
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char input[81];

    printf("vvedite stroku do 80 simvolov: ");
    scanf("%80s", input);

   
    for (int i = 0; input[i]; i++) {
        if (input[i] == 'a') {
            input[i] = 'A';
        }
        else if (input[i] == 'b') {
            input[i] = 'B';
        }
    }

    printf("result: %s\n", input);
    return 0;
}

