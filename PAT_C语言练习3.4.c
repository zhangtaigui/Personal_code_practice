#include<stdio.h>

int main(){
   int n,score;
int A, B, C, D, E;
A=B=C=D=E=0;
scanf("%d",&n);
for(int i=1; i<=n; i++){
scanf("%d",&score);
if(score>=90)
A++;
else if(score>=80)
B++;
else if(score>=70)
C++;
else if(score>=60)
D++;
else
E++;}
    printf("%d %d %d %d %d",A,B,C,D,E);
    }
