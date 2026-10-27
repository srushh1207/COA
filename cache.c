#include <stdio.h>
int main() {
int c[4]={-1,-1,-1,-1},b,line;
printf("Direct Mapping:\n");
for(int i=0;i<6;i++)
printf("Block %d -> Cache Line %d\n",i,i%4);
for(int i=0;i<5;i++) {
printf("\nEnter memory block: ");
scanf("%d",&b);
line=b%4;
printf("Block %d -> Cache Line %d\n",b,line);
if(c[line]==b) printf("Cache Hit\n");
else {
printf("Cache Miss\n");
c[line]=b;

}
printf("Cache Contents:\n");
for(int j=0;j<4;j++)
if(c[j]==-1) printf("Cache Line %d : Empty\n",j);
else printf("Cache Line %d : Block %d\n",j,c[j]);
}
return 0;
}