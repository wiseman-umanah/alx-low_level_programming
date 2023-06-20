#include "main.h"

/**
* print_alphabet - function name
*
* Return: Always 0
*/

void print_alphabet(void);

int main(void) {
    print_alphabet();
    return 0;
}

void print_alphabet(void) {
    for (char c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar('\n');  // Add a newline after printing the alphabets
}
