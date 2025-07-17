#include <stdio.h>
#include <conio.h>
int swap(int *x,int *y);

int main(){

        int a=5,b= 7;
        printf("\n ACTUAL VALUES\n");
        printf("\na= %d\t,b=  %d\n",a,b);
        swap(&a,&b);
        printf("\n VALUES AFTER INTERCHANGE\n");
        printf("\na= %d\t,b= %d\n",a,b);
        return 0;

}
