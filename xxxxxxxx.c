#include <stdio.h>
#include <conio.h>


// int main () {

//     int sum = 0;
//     for(int i = 1;i<=10;i+=2){
//         sum = sum +i;
//     }
//     printf("sum of even numbers: %d",sum);
//     return 0;


// }

// int main(){

//     int i = 1;
//     do{
//         printf("%d\n",i);
//         i++;

//     }while(i<=5);
//     return 0;
// }

// int main (){
//     int day = 2;

//     switch(day){
//        case 1:
//        printf("Monday\n");
//        break;

//        case 2:
//        printf("tuesday\n");
//        break;

//        case 3:
//        printf("wednesday\n");
//        break;
//        default:
//        printf("invalid\n");
//     }
//     return 0;
// }

int main (){

    char grade;

    printf("enter the grade of studdent: ");
    scanf("%c",&grade);

    switch(grade) {
        case 'A':
        printf("4.0");
        break;

        case 'B':
        printf("3.0");
        break;

        case 'C':
        printf("2.0");
        break;

        case 'D':
        printf("1.0");
        break;

        case 'f':
        printf("0.0");
        break;

        default:
        printf("INVALID GRADE:");
    }
    return 0;

}