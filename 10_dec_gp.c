//100,50,25
#include<stdio.h>
int main(){
    float a=100;
    printf("First term of the dec gp=%f\n\n",a);
    for(int i=1;a>=1;i++){
        printf("no of term %d is = %f\n",i,a);
        a=a/2;
    }
    return 0;
}