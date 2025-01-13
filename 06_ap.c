// arithmatic progression
// 4,7,10,13,16,19,22,25,28,31...n th term=4+((n-1)*3)=4+3*n-3=3*n+1
#include<stdio.h>
int main(){
    int n;//n=no of turns
    printf("enter no of turns n = ");
    scanf("%d",&n);
    for (int i=4;i<=3*n+1;i+=3){
        printf("no of term %d is = %d\n",i/3,i);
    }

    return 0;
}