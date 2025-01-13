#include<stdio.h>

int main(){
    int n;//n-> no in ap <= n
    printf("enter higher/highest number n = ");
    scanf("%d",&n);
    for (int i=4;i<=n;i+=3){
        printf("no of term %d is = %d\n",i/3,i);
    }

    return 0;
}

