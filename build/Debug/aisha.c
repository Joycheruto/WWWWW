/*#include <stdio.h>

int main(){

        int principle,n;
        float rate,simple_interest;
        
        principle = 2000;
        n = 3;
        rate = 12.5;

        simple_interest = principle * n * rate/100;

        printf("\n %.2f",simple_interest);
        return 0;

}

#include <stdio.h> 

int main (){

      float allowance1, allowance2, basicSalary, gross_salary;

      allowance1 = 0.4*basicSalary;
      allowance2 = 0.2*basicSalary;
      basicSalary = 30000;

      //printf("enter your basic salary:");
      //scanf("%f",&basicSalary);

      gross_salary = basicSalary + allowance1 + allowance2;

      printf("\n your gross salary is%.2f",gross_salary);
      return 0;



}
  

#include <stdio.h>

int main (){
float cm, metres, feets, inches, km;

printf ("enter disance in km:");
scanf ("%f",&km);

cm = km * 100000;
metres = km * 1000;
feets = km * 3280.84;
inches = km * 39370.1;



printf ("\ndistance in cm,%f",cm);
printf ("\ndistance in metres,%f",metres);
printf ("\ndistance in feets,%f",feets);
printf ("\ndistance in inches,%f",inches);
return 0;



}


#include <stdio.h>
int main (){

    int math, phs, chem, bio, aggregateMark;
    float percentage_mark;
    printf ("enter the marks of each subject");
    scanf ("%d%d%d%d",&math,&phs,&chem,&bio);

    aggregateMark = math + phs + chem + bio;
    percentage_mark = ((float)aggregateMark/400 )*100 ;
    printf ("\naggregateMark is...%d",aggregateMark);
    printf ("\npercentage_mark is...%f",percentage_mark);
    return 0;

}

#include <stdio.h>
int main (){

    int a=6;
    if (a>=100){
        printf ("\nxxxxx");
    
    }else{

    printf("\noutside the if");
    }
    return 0;
}


#include <stdio.h>
int main (){

    int Ram, shyam, Ajay;

    printf("Enter the age of ram");
    scanf("%d",&Ram);
    printf("Enter the age shyam");
    scanf("%d",&shyam);
    printf("enter the age of Ajay");
    scanf("%d",&Ajay);
    

    if (Ram< shyam){
        printf("\n ram is the youngest");
    } if (Ajay< shyam){
        printf("\n Ajay is the youngest");

    }if {
    printf("shyam is the youngest");
    }
    return 0;





}

#include <stdio.h>


int main(){

    int cp,sp,profit,loss;

    printf("Enter the cash price :");
    scanf("%d",&cp);

    printf("\n Enter the selling price:");
    scanf("%d",&sp);

    profit = sp - cp;
    loss= cp - sp;

    if (sp>cp){
        printf("\n profit made:%d ",profit);
    }else{
        printf("\n loss made :%d",loss);
    }
    return 0;


}

#include<stdio.h>


int area_of_a_triangle(int *b,int *h);

int main(){

    int base,height,result;

    printf("\nEnter the base of the triangle: ");
    scanf("%d",&base);
    printf("\nEnter the height of th triangle: ");
    scanf("%d",&height);

    result = area_of_a_triangle(&base,&height);

    printf("\n The area of your triangle is : %d",result);
    return 0;
}

int area_of_a_triangle(int *x,int *y){

    int product;

    product = 5 * (*x) * (*y);
    return product;
}*/
