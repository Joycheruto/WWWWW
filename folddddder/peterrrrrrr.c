/*#include <stdio.h>
#include <conio.h>

int main(){

    { 
        int num ; 
        printf ( "Enter a number less than 10 " ) ; 
        scanf ( "%d", &num ) ; 
        if ( num <= 10 ) 
          printf ( "What an obedient servant you are !" ) ; 
        
       }


}


#include <stdio.h>
#include <conio.h>


int main(){

    float discount,price_per_item,total;
    int quantity;

    printf("Enter the quantity purchased: ");
    scanf("%d",&quantity);

    printf("\nEnter the price per item :");
    scanf("%f",&price_per_item);
    
    total = quantity * price_per_item;

        if (quantity> 1000){
            total = total -(0.10* total);
            printf("discount of 10%% applied.\n");
    }
    printf("Your total expenses are : %.2f\n",total);
    return 0 ;

}


#include <stdio.h>
#include<conio.h>


int main(){

    int current_year,year_joined,years_served,bonus;

    printf("Enter the current year: ");
    scanf("%d",&current_year);

    printf("Enter the year the employee joined: ");
    scanf("%d",&year_joined);

    years_served = current_year - year_joined;
    printf("\nThe years served by the employee are:%d",years_served);

    if (years_served>3){
        bonus = 2500;
        printf("\nbonus received%d",bonus);

    }

    return 0;






}

#include <stdio.h>
#include <conio.h>


int main (){

    int basic_salary,HRA,DA,Gross_salary;


    printf("Enter the employees basic salary: ");
    scanf("%d",&basic_salary);

    if (basic_salary >1500){

        HRA = 0.1 * basic_salary;
        DA = 0.9 * basic_salary;
    }else{

        HRA = 500;
        DA = 0.98 * basic_salary;

    }

    Gross_salary = basic_salary + HRA + DA;
    printf("The gross salary is:%d",Gross_salary);

    return 0;



}


#include <stdio.h>
#include <conio.h>


int main(){

    int m1,m2,m3,m4,m5,percentage;

    printf("Enter marks in five subjects:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    percentage = (m1+m2+m3+m4+m5)/5;

    if(percentage>=60){
        printf("first division");
    }else if(percentage>=50){
        printf("second division");
    }else if(percentage>=40){
        printf("3rd division");
    }else
        printf("failed");

    return 0;




}


#include <stdio.h>
#include <conio.h>


int main(){

    char marital_status,sex;
    int age;

    marital_status = 'm';
    sex = 'f';
    age = 22;

    if(
        (marital_status=='u')||
        (marital_status=='m'&&sex =='m'&&age>30)||
        (marital_status=='m'&&sex=='f'&&age>25)
    ){
        printf("Driver is insured\n");
    }else{
        printf("Driver is not insured!!\n");
    }
    return 0;




}*/

#include <stdio.h>
#include <conio.h>

int main(){

 
    char sex, ms ; 
    int age ; 
    printf ( "Enter age, sex, marital status " ) ; 
    scanf ( "%d %c %c", &age, &sex, &ms ) ; 


    if ( ms == 'M' ) 
    printf ( "Driver is insured" ) ; 
    else 
    { 
    if ( sex == 'M' ) 
    { 
   
    if ( age > 30 ) 
    print( "Driver is insured" ) ; 
    else 
    printf ( "Driver is not insured" ) ; 
    } 
    else 
    { 
    if ( age > 25 ) 
    printf ( "Driver is insured" ) ; 
    else 
    printf ( "Driver is not insured" ) ; 
    } 
    } 
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
    return 0;

    
   } 

   




