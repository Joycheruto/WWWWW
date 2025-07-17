#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char color[20];
    char pluralnoun[20];
    char celebrityf[20];
    char celebrityl[20];

    printf("Enter the color ");
    scanf("%s", color);

    printf("Enter the pluralnoun ");
    scanf("%s", pluralnoun);

    printf("Enter the celebrity ");
    scanf("%s%s", celebrityf,celebrityl);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",pluralnoun);
    printf("I love %s%s\n", celebrityf,celebrityl);
    return 0;






}