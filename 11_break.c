// composite or prime number
#include<stdio.h>
int main(){
    int n;
    printf("enter your number = ");
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        if(n%i==0){
            printf("%d is a composite number",n);
            break; // break mane akbar condition satisfied hoye gele loop break hoye jabe
        }
        else{
            printf("%d is a prime number",n);
            break; // break mane akbar condition satisfied hoye gele loop break hoye jabe
        }
    }
    return 0;
}