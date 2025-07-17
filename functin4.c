#include <stdio.h>
#include <conio.h>

int main(){

    int a = 9;
    int *ptr;
    ptr = &a;
    printf("adrressof a =%u\n",&a);
    printf("adrressof a =%u\n",ptr);
    printf(" value in adrressof a =%u\n",*(ptr));
    printf("adrressof a =%u\n",*(&a));
    printf("\nvalue in a=%d\n",a);
    printf("\n size of area occupied by  variabe a= %u",sizeof(a));

    return 0;
}
