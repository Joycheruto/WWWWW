#include <stdio.h>
#include <conio.h>

int main(){

    int n,i,j,isprime;

    prinf("\n Enter a number: ");
    scanf("%d",&n);

    for(i = 2;i<=n;i++){
        isprime = 1;
        for (j = 2;j<i;j++){
            if(i%j ==0){
                isprime = 0;
                break;
            }
        }
    }if(isprime){
        printf("%d",i);
    }
    return 0;
}