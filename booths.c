#include <stdio.h>
int main() {
int m, q, A = 0, q1 = 0, i, t;
printf("Enter multiplicand: ");
scanf("%d", &m);

printf("Enter multiplier: ");
scanf("%d", &q);
printf("\nStep\tA\tQ\tQ-1\n");
for (i = 1; i <= 8; i++) {
if ((q & 1) == 0 && q1 == 1)
A += m;
else if ((q & 1) == 1 && q1 == 0)
A -= m;
t = A & 1;
q1 = q & 1;
A = A >> 1;
q = (q >> 1) | (t << 7);
printf("%d\t%d\t%d\t%d\n", i, A, q & 255, q1);
}
printf("\nProduct = %d\n", (A << 8) | (q & 255));
return 0;
}
