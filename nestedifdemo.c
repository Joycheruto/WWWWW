/*#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 3;
    if (a<0)
        printf("true");
        else if(a<2)
            printf("\nalmost");
        else if (a==4)
            printf("very true");
    else
        printf("\nfalse");
    return 0;
}
*/


/*mark sheet
#include  <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main()
{
    int marks = 49;
    char name [10] = "Elizabeth";
    if (marks>100)
        printf("\nmarks beyond");
        else if (marks>80)
            printf("\n Grade =A");
        else if (marks>70)
            printf("\n Grade = B");
        else if (marks>50)
            printf("\n fail");
    else
        printf ("invalid marks");
    return 0;


}



#include <stdio.h>

int main ()
{
    int number = 2;
    if (number>0){
        printf("The number is positive\n");
        [
    }else if (number<0){
        printf("the number is a negative\n");
    }else {
        printf("The number is a zero\n");
    }

     return 0;   




}
#include <stdio.h>

int main()
{
    char name[] = "Elizabeth";
    int math = 67;
    int english =52;
    int physics = 98;
    float average = (math + english +physics) / 3.0;;

   

    printf("student: %s\n",name);
    printf("math: %d,english: %d,physics: %d",math,english,physics);
    printf("\nAverage Marks:  %.2f\n",average);


    if(average>=90){
        printf("Grade = A\n");
    }else if(average>=80){
        printf("Grade = B\n");
    }else if(average>=70){
        printf("Grade = C\n");
    }else if(average>= 60){
        printf("Grade =  D");
    }else{
        printf("Grade = F");
    }

    return 0;



}


#include <stdio.h>

int main ()
{
    int num = 47;
    if (num %5 ==0){
        printf("The num is divisible by 5");
    }else{
        printf("the num is not divisible by 5");
    }

    return 0;





}

#include <stdio.h>
#include <string.h>

int main (){

        char password[]  = "squiddy";
        int length = strlen(password);
        if (length>=10) {
            printf("it is valid");
        }else{
            printf("it is not valid");
        }
        return 0;

}


#include <stdio.h>

int main(){

    int principal , n;
    float rate = 8.5, si;
    printf("Enter the principal\n,Enter n \n");
    scanf(" %d %d",&principal,&n);

    si = principal * n  *rate/100;

    printf("The interest  earned is  %f",si);



}


#include <stdio.h>
/*calculating ramesh's basic salary
int main(){

    float basic_salary,allowance,rent_allowance,gross;
    printf(" Enter the basic salary; \n");
    scanf("%f",&basic_salary);

    allowance = 0.4 * basic_salary;
    rent_allowance = 0.2 *basic_salary;

    gross = basic_salary + allowance + rent_allowance;

    printf("%f" ,gross);
    
    return 0;
} 

#include <stdio.h>

int main(){

    int distance_in_km ;
    printf("Enter the distance in km \n ");
    scanf("%d km.\n",&distance_in_km);
    float meters,feet,inches,centimeter;

    meters = distance_in_km *1000;
    feet = distance_in_km * 3280.84;
    inches = distance_in_km * 39370;
    centimeter = distance_in_km * 100000;

    printf("%.2f meters\n %.2f feet\n" , meters,feet);
    return 0;


}


#include <stdio.h>

int main (){

    int Math,English,Physics, Biology,percentage;
    float aggregate;
    printf("Enter math ,english,physics, Biology\n ");
    scanf("%d %d %d %d ",&Math,&English,&Physics,&Biology);
    

    aggregate = (Math +English +Physics + Biology) / 4;
    
    printf("aggregate mark is: %.2f\n ",aggregate);


        if (aggregate>=70){
            printf("A");
        }else if(aggregate>=60){
            printf("B");
        }else if(aggregate >= 55){
            printf("C");
        }else if(aggregate>= 50){
            printf("D");
        }else{
            printf("The student has failed !!");
        }
    return 0;


}


#include <stdio.h>


int main(){

    

    int length , breadth , radius , per_rectangle , circumference;
    float area_of_rectangle , area_of_circle;
    
    length = 25;
    breadth = 66;
    radius = 14;

    per_rectangle = 2*(length +breadth);
    circumference = 2 * 3.142*2* radius;

    area_of_rectangle = length * breadth;
     
    printf("perimeter of rect %d\n ",per_rectangle);
    printf("circumference is %d\n",circumference);
    printf("area of rectangle is  %.2f\n",area_of_rectangle);
    return 0;

} 


#include <stdio.h>
/--swapping variables--/
int main (){

    int a,b,d;
    a = 4;
    b = 6;
    d = a;


    a = b;
    b = d;
    
    
    printf("a= %d b= %d",a ,b);
    return 0;
}


#include <stdio.h>

int main (){

    int num,digit1,digit2,digit3,digit4,digit5,sum;

    printf("Enter  a five digit number:  ");
    scanf("%d",&num);

    digit5 = num % 10;
    num = num / 10;
    digit4 = num % 10;
    num = num / 10;
    digit3 = num % 10;
    num = num /10;
    digit2 = num % 10;
    num = num /10;
    digit1 = num % 10;
    num = num % 10;

    sum = digit1+digit2+digit3+digit4+digit5;

    printf("sum of the digits = %d\n", sum);
    return 0;



}

#include <stdio.h>

int main (){


    int num, reversedNum = 0,remainder ;

    printf("Enter a five digit number:  ");
    scanf("%d", &num);

    while (num != 0){
        remainder = num % 10;
        reversedNum = reversedNum * 10 +remainder;
        num /= 10;
    }
    printf("Reversed number = %d\n",reversedNum);
    return 0;


}*/

#include <stdio.h>

int main(){

    int num, firstDigit, LastDigit,sum;

    printf("Enter a Four digit number:  ");
    scanf("%d ", &num);

    if(num <1000 || num >9999){
        printf("Please enter a valid four digit number.\n");
        return 1;
    }


    LastDigit = num % 10;
    firstDigit = num / 1000;

    sum = firstDigit + LastDigit;

    printf("sum of the last digit and first digit = %d\n",sum);
    return 0;




}