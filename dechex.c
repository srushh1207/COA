
#include <stdio.h>

void printBinary(int n)
{
    for (int i = 15; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int dec, hex;

    printf("Enter decimal: ");
    scanf("%d", &dec);

    printf("Enter hexadecimal: ");
    scanf("%x", &hex);

    printf("Binary of decimal: ");
    printBinary(dec);

    printf("Binary of hexadecimal: ");
    printBinary(hex);

    return 0;
}
