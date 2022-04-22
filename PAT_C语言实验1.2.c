#include<stdio.h>

int main(){
    int i;
    int j;
    int sum=1;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
        sum=j*sum;
    printf("%d\n",sum);
    return 0;
}
