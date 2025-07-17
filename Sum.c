#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("hello world??\n");
    printf("hello world??\n");
    



    printf("    /|\n");
    printf("   / |\n");
    printf("  /  |\n");
    printf(" /___|\n");

    char characterName [] = "John";
    int characterAge =35;
    printf("There was once a man named %s\n",characterName);
    printf("he was %d years old\n",characterAge);
    characterAge = 20;
    printf("He really liked the name%s\n",characterName);
    printf("but did nit like being %d. \n",characterAge);

    #include <math.h>

    printf("%f\n" , pow(2,3));
    printf("%f\n", sqrt(1296));
    
    int num = 5;
    printf("%d \n", num);
    num = 8;
    printf("%d\n" , num);

    /* age;
    printf("Enter your age: ");
    scanf("%d" ,& age);
    printf("you are %d years old\n" ,age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf" ,& gpa);
    printf("your gpa is %f " ,gpa);
    

    char grade;
    printf("Enter your grade: \n");
    scanf("%c" ,& grade);
    printf("your grade is %c\n" ,grade);
    */
    char name[20];
    printf("Enter your name: \n");
    fgets(name, 20 , stdin);
    printf("your name is %s\n" ,name);
    return 0;


/*Data types
1.integers -whole numbers
 int age = 40;

2.double - rep decimal no

3.characters - stores one single character
char grade = 'A';

4.string - collection of characters
char phrase[] = "Giraffe School "

PRINTF
printf("%d",500); %d - we want to print a integer
printf("%s")  %s - add more text
printf("My favorite %s is %d, "number" ,6500);
%f -prints a decimal  number
%c -prints a character


constants- special type of variable which can be modified

*/
#include <math.h>

    printf("%d", pow(2,3));
    return 0;
}
