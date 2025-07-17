#include <stdio.h>
#include <conio.h>
#include <string.h>
struct book
{
    char name;
    float price;
    int pages;
};


int main(){

    struct book b1 = {'A',35.0,555};
    
    // strcpy(b1.name, "ALICE IN WONDER LAND");
    // b1.price = 2500.0;
    // b1.pages = 66;

    // b2.pages = 25;

    // b3.price = 68.0;

    // printf("name:%s\n",b1.name);
    printf("price:%f\n",b1.price);
    printf("pages:%d\n,",b1.pages);
    // printf("pages:%d\n",b2.pages);
    // printf("price of book 3:%f\n",b3.price);

    // printf("/n Address of name  = %u\n",&b1.name);
    // printf("/n Address of price  = %u\n",&b1.price);
    // printf("/n Address of pages  = %u\n",&b1.pages);
    return 0;

    // printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ; 
    // scanf ( "%c %f %d", &b1.name, &b1.price, &b1.pages ) ; 
    // scanf ( "%c %f %d", &b2.name, &b2.price, &b2.pages ) ; 
    // scanf ( "%c %f %d", &b3.name, &b3.price, &b3.pages ) ;

    // printf ( "\nAnd this is what you entered" ) ; 
    // printf ( "\n%c %f %d", b1.name, b1.price, b1.pages ) ; 
    // printf ( "\n%c %f %d", b2.name, b2.price, b2.pages ) ; 
    // printf ( "\n%c %f %d", b3.name, b3.price, b3.pages ) ; 


}


    




