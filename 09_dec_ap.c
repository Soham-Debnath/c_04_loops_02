//100,97,94...
#include<stdio.h>
int main(){
    int a=100;
    printf("First term of dec ap = %d",a);
    for(int i=1;a>0;i++){
        printf("no of term %d is = %d\n",i,a);
        a=a-3;
    }
    return 0;
}