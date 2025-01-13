#include<stdio.h>
// 3,12,48...
int main(){
    int n;
    printf("enter no of turns n= ");
    scanf("%d",&n);
    int a = 3;
    for(int i=1;i<=n;i++){
        printf("no of term %d is = %d\n",i,a);
        a=a*4;
    }
    return 0;
}