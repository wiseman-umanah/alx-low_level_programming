#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always (0)
*/
int main(void)
{
    int i;
    int length = 10;
    char password[length + 1];

    srand(time(NULL));

    for (i = 0; i < length; i++)
    {
        int random = rand() % 3;

        if (random == 0)
        {
            password[i] = 'A' + rand() % 26;
        }
        else if (random == 1)
        {
            password[i] = 'a' + rand() % 26;
        }
        else
        {
            password[i] = '0' + rand() % 10;
        }
    }

    password[length] = '\0';

    printf("Generated password: %s\n", password);

    return (0);
}
