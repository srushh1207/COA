#include <stdio.h>
void bin(int n) {
for(int i=7;i>=0;i--) printf("%d",(n>>i)&1);
}
int main() {
int d,m,A=0,Q;
printf("Enter dividend (0-255): ");
scanf("%d",&d);
printf("Enter divisor (1-255): ");
scanf("%d",&m);
if(d<0||d>255||m<1||m>255) {
printf("Invalid input!");
return 1;
}
Q=d;

printf("\nStep\tA\tQ\n");
for(int i=1;i<=8;i++) {
A=(A<<1)|(Q>>7);
Q=(Q<<1)&255;
A-=m;
if(A<0) A+=m;
else Q|=1;
printf("%d\t",i);
bin(A);
printf("\t");
bin(Q);
printf("\n");
}
printf("Quotient = %d\nRemainder = %d\n",Q,A);
return 0;
}