
#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100];
    int i, len;

    printf("Enter binary number: ");
    scanf("%99s", binary);

    len = strlen(binary);

    for (i = 0; i < len; i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
            break;
        }
        else
            binary[i] = '0';
    }

    printf("2's complement: %s\n", binary);

    return 0;
}
