/*#include <stdio.h>

                        //when a function is declared with void it means : the function does not return a value
void changeValue(int x) {   //This function does not have much "real" use unless:
                              // 1.you return x back to the main() or you use pointers to modify the original value 
    x =  100;
}

int main(){

     int a = 5;
    changeValue (a);
    printf("%d",a);
    return 0;


} */


/*better version

#include <stdio.h>

int changeValue(int x){
    x = 100;
    return x;
}

int main(){
    int a = 5;
    a = changeValue(a);
    printf("%d",a);
    return 0;   // output 100
}*/

//pass by reference

/*#include <stdio.h>

void changeValue (int *x) {
    *x = 100; // *x means the "value at address x"  // 'x' is a pointer and  'void ' is ued as return type
                                                        //   for the function
                                                        // means this function doesn't return any value
                                                        // it just performs a task and doesn't need to send anything back to the caller
    return x;
}

int main (){
    int a = 5;
    changeValue(&a);  //&a means "address of a "
    printf("%d",a);
    return 0;
} 


#include <stdio.h>

// swapping two numbers using pointers(pass by reference)

void swap (int *x,int *y){
    int temp = *x;
    *x  = *y;
    *y  = temp;
}

int main (){
    int a = 10,b = 20;

    printf("before swap: a= %d b = %d\n", a,b );
    swap (&a,&b);  // passes the addresses of a and b 
    printf("after swap : a =%d, b = %d\n",a,b );
    return 0;
}  



#include <stdio.h>

void calculate(int *length,int *width,
                int *area,int *perimeter){
                    *area = (*length) * (*width);
                    *perimeter = 2*(*length + *width);
                }

int main(){

    int length = 10,width = 30;
    int area ,perimeter;

    calculate(&length,&width,&area,&perimeter);   // calling the function and pass the address of area and perimeter

    printf("Area :%d\n",area);
    printf("perimeter: %d\n",perimeter);

    return 0;


}

#include <stdio.h>
void  argentina();

int main(){
   printf("in main\n");
     argentina();
   printf("\nnow in main");
}

void argentina(){
        printf("\ni am in argentina");

}


#include <stdio.h>

int calsum (int x,int y,int z);
int main()
{ 
    int  a, b, c, sum ; 
    printf ( "\nEnter any three numbers " ) ; 
    scanf ( "%d %d %d", &a, &b, &c ) ; 
    sum = calsum ( a, b, c ) ; 
                                 
    
    printf ( "\nSum = %d", sum ) ; 
    return 0;
    } 
int calsum (int x,int y,int z ) {
        int  x, y, z ; 
        { 
        int  d ; 
        d = x + y + z ; 
        return ( d ) ; 
    } 
}



#include <stdio.h>
void italy();
void brazil();
void argentina();

int main(){

    printf("\n I am in main\n");
    italy();
    printf("\nI am bac in main");
    argentina();
    
}

void italy(){

    printf("\nI am in Italy");
    brazil()
    
}
void brazil(){
    printf("\ni am in brazil\n");
    
}
void argentina(){
    printf("\ni am in argentina");
}


#include <stdio.h>
int calsum(int x,int y,int z);     //int calsum(int x,int y,int z)
    int x,y,z;
    result = x+y+z;
    return result;
int main(){


    int a,b,c,sum;
    printf("\nEnter any three numbers");
    scanf("%d%d%d",&a,&b,&c);

    sum = calsum(a,b,c);
    printf("\n Sum = %d",sum);
    return 0;
}

//int calsum (int x,int y,int z){
//    int d;
//  d = x+y+z;
  //  return (d);
//}




#include <stdio.h>
#include <conio.h>

void japan();  ///function declaration  
void argentina();//done globally   
int addition(int x,int y,int h);  // here the return type is integers
// the return types can be void,int,float,string ,char,double
//kkk
int perimeter(int ,int );
int main(){

        printf("\nI am in main function");
        argentina();  // function call
        printf("\nI ma bac frm argentina");
       
        int sum,x,y,k;
        printf("\nEnter values of x and y and k: ");
        scanf("%d %d %d",&x,&y,&k);
        sum = addition (x,y,k);
        printf("cummulative sum = %d\n",sum);
        perimeter(3,4);
}

void argentina(){   // function definition implements the program
    printf("\nI am in argentina");

}

int addition(int a,int b,int c){

    int z ;
    z = a+b+c;
    
    printf("\nsum = %d\n",z);
    return z;
}

int perimeter(int x,int y){
    int per,l,w;
    per = 2*(l+w);
    printf("\nPERIMETER = %d\n",per);
    return 0;
}


#include <stdio.h>


int addition(int x,int y);
int subtraction(int xx,int yy);
void  multiply(int h,int j);
float division(int r,int t);

int main(){

        addition(8,9);
        printf("\nI am in main\n");
        int res = subtraction(99,86);
        printf("\nresult of subtraction is; %d",res);
        multiply(33,5);
      //  printf("\n my result after multiplying  in the function  is:%d",product);
       int output_result,r,t;
       printf("\nEnter the value of r and t: ");
       scanf("%d %d",&r,&t);
       output_result = division(r,t);
       printf("\nthe output of division is:%d ",output_result);
       

}

int addition(int a,int b){
    int result;
    result = a+b;
    printf("\nmy result for addition is:%d",result);  //not a good practce because you are outputting i the function you have not returned the response bac to the person who called you.


}

int subtraction(int m,int n){
    int res;
    res = m-n;
   // printf("\nmy resut for subtraction is:%d",res);
   return res;
    
}

void multiply(int o,int p){
    int product;
    product = o * p;
    
    printf("\n my result after multiplying is:%d",product);
    
}

float division(int w,int q){
    int end_product;
    end_product = (w/q);
    return end_product;
}


#include <stdio.h>


int calsum(int p,int q,int r);
char fun ();

int main(){

    int a,b,c,sum;

    printf("\n Enter any three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    sum = calsum(a,b,c);
    printf("\nsum = %d",sum);

    fun();

}

int calsum (x,y,z)
  int x,y,z;{
     int d ;
     d = x+y+z;
     return (d);
  } 

  char fun(){
    char ch;
    printf("\nEnter any alphabet");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
        return (ch);
    else
        return (ch+32);
  }


  #include <stdio.h>

  float square(float r);

  int main (){

    float a,b;

    printf("\n Enter any number");
    scanf("%f",&a);

    b = square(a);
    printf("\n square of %f is %.2f",a,b);
  }
  float square (float x){
    float y;
    y = x *x;
    return (y);
  }

  

#include <stdio.h>


int main (){

    int i =3;
    int *j = &i;
    printf("\n Address of i = %u",&i);
    printf("\n Address of i =%u",j);
    printf("\nAddress of j =%u",&j);
    printf("\nValue of j = %u",j);
    printf("\n Value of i = %d",i);
    printf("\nValue of  i = %d",*j);/// interesting!!!
    printf("\n value of i = %d",*(&i));// prints out the value at that address
    printf("\n %d",j);
}


#include <stdio.h>


int main (){

    int i = 3, *j, **k;

    j=&i;
    k=&j;

    printf("\n Address of i =%u",&i);
    printf("\n Address of i = %u",j);
    printf("\n Address of i = %u",*k);//
    printf("\nAddress of j=%u",&j);
    printf("\n Address of j = %u",k);
    printf("\n Address of k = %u",&k);
    printf("\n value  of j =%u",j);// value if j is the address of i
    printf("\n value of k = %u",k);// value of k is the address of j
    printf ( "\nValue of i  = %d", i ) ;
    printf ( "\nValue of i  = %d", * ( &i ) ) ;
    printf ( "\nValue of i  = %d", *j ) ; //
    printf ( "\nValue of i  = %d", **k ) ; //



}
    

#include <stdio.h>
int swapv(int x,int y);
int main(){

    int a =10,b= 20;

    swapv(&a,&b);
    printf("\na=%d \tb=%d",a,b);
}
int swapv(int *x,int *y){
    int t;

    t= *x;
    *x= *y;
    *y=t;

    printf("\n x=%d \ty =%d",x,y);
}


#include <stdio.h>

int area_perimeter(int h,int p);

int main(){
    int radius;
    float area,perimeter;

    printf("\nEnter the radius of a circle: \t");
    scanf("%d"&radius);

    area_perimeter(radius,&area,&perimeter);

    printf("\n Area =%f",area);
    printf("\nperimeter = %f",perimeter);
}

int area_perimeter(int r,float *a,float *p){
    *a = 3.14 * r *r;
    *p = 2* 3.14 *r;
    return *a;
    return *p;
}



#include<stdio.h>

int fun(int *a,int *b);
int main(){

        int x= 10,y = 20;

        fun(&x,&y);
        printf("\nx= %d,y = %d",x,y);

}

int fun(int *p,int *q){
    *p= 20;
    *q = 10;
   

    printf("\n i am in fun");
    printf("\n%d",q);
    
}
   

#include <stdio.h>

int factorial (int a);

int main(){

    int num,fact;

    printf("\nEnter any number: ");
    scanf("%d",&num);

    fact =factorial(num);
    printf("\nfactorial value  = %d",fact);

    return 0;

}

int factorial(int y){

    int f ,i;
    f = 1;

    for (i=y;i>=1;i--){
        f=f*i;
    }
    return f;
}



 #include <stdio.h>

 int recur (int y);

 int main(){

        int number,fact;

        printf("\nEnter any number: ");
        scanf("%d",&number);

        fact = recur(number);
        printf("\n Factorial value = %d",fact);

        return 0;
 }

int recur(int z){
    int f;

    if (z==1){
       return (1); 
    }else if(z<1){
        printf("\n not possible!!");
        printf("\n xxx");
        return  (z);
    }else{

        f = z *recur(z-1);
        printf("\n wwww"); //why is the factorial above 32 giving a negative value
        return (f);
    }
} 

#include<stdio.h>
#include <math.h>

int power(int x,int y);

int main (){

    int num1,num2,num;

    printf("\nEnter the base :");
    scanf("%d",&num1);

    printf("\n Enter the power: ");
    scanf("%d",&num2);

  

    num =power(num1,num2);
    printf("\n the power is : %d",num);
    return 0;
}




int power (int a,int b){
    int result,i;
    result = 1;

    if (b ==0 ){
        return (1);
    }else if(b ==1){
        return (a);
    }else{
        for (i=1;i<=b;i++){
            result *=a;
        }
    }
    return result; //we did it!!!

}

#include <stdio.h>

int leapyearcheck(int y);

int main(){
    int year,answer;

    printf("\nEnter a year:  ");
    scanf("%d",&year);

    answer = leapyearcheck(year);


        if (answer){
            printf("\n its a leap year!!!");
        }else{
            printf("\n its not a leap year");
        }

    return 0;
    
    
}

int leapyearcheck(int year){
    
    if (year%4==0){
        
        
     //   printf("\n it is a leap year!!");
        return 1;
    }else{
       // printf("\n it is not a leap year");
        return 0;
    }

}
    


#include <stdio.h>


void prime_checker(int x);

int main(){


    int num;

    printf("ENTER A POSITIVE  INTEGER:  ");
    scanf("%d",&num);
    
    prime_checker(num);
   //s printf("\n the prime factors are  %d",num);

    return 0;
}

void prime_checker(int y){
    //printf("Prime factors of %d are : ",y);
    while (y %2==0){
        printf("2 ");
        y /=2;
    }

    for (int i=3;i*i<=y;i+=2){
        while(y%i == 0){
            printf("%d ",i);
            y/=i;
        }
    }

    if(y>2)
    printf("%d are the prime factorss",y);

    printf("\n");
}


#include <stdio.h>

float product(float x,float y);

int main(){

    int num;
    float num2,result;

    printf("\nENTER AN INTEGER");
    scanf("%d",&num);

    printf("\n ENTER A FLOAT: ");
    scanf("%f",&num2);

    result=product(num,num2);

    printf("\n the products are: %.2f ",result);

}


float product(float a,float b){

    float d ;
    d= a*b;
    return d;

}



#include <stdio.h>

int statistics(int *h,int *k,int *l,int *m, int *n);

int main(){

    int a,b,c,d,e,sum,average;

    printf("\n ENTER THE INTEGERS:   ");
    scanf(" %d%d%d%d%d",&a,&b,&c,&d,&e);


    statistics(&a,&b,&c,&d,&e);

    printf("\n the summation is  :%d",sum);
    
    printf("\n the average is :%d",average);
    return 0;


}

int statistics(int *h,int *k,int *l,int *m, int *n){

    int sum,average,standard_deviation;

    sum = *h+*k+*l+*m+* n;
    return sum;

    average = sum/5;
    return average;

    //sstandard_deviation = 

}

#include <stdio.h>
#include <math.h>
void statistics(int h,int j,int k,int l,int m,int *sum,float *average,float *std_dev);

int main(){

    int a,b,c,d,e;
    int sum;
    float average,std_dev;

    printf("ENTER 5 INTEGERS:  ");
    scanf(" %d%d%d%d%d",&a, &b, &c, &d, &e);

    statistics(a,b,c,d,e, &sum, &average, &std_dev);

    printf("\nthe sum is :  %d",sum);
    printf("\n the average is:  %.2f",average);
    printf("\n The standard deviation is: %.2f",std_dev);
   
   // printf("\nthe standard deviation is:%.2f",std_dev);

    return 0;

}

void statistics(int h,int j,int k,int l,int m, int *sum,float *average,float *std_dev){

    *sum = h+j+k+l+m;
    *average = *sum/5.0;

    float var = 0;

    var +=pow(h- *average, 2);
    var +=pow(j- *average, 2);
    var +=pow(k- *average, 2);
    var +=pow(l- *average, 2);
    var +=pow(m- *average, 2);

    var = var / 5.0;
    *std_dev = sqrt(var);

    //printf("\nthe sum is :  %d",sum);
   // printf("\n the average is:  %.2f",average);

}

#include <stdio.h>
void calculate(int a,int b,int c,float *average,float *percentage);
int main(){

    int math,phy,bio;
    float average,percentage;

    printf("\nENTER MARKS OBTAINED IN MATH:  ");
    scanf("%d",&math);

    printf("\nENTER MARKS OBTAINED IN PHY:  ");
    scanf("%d",&phy);

    printf("\nENTER MARKS OBTAINED IN BIO:  ");
    scanf("%d",&bio);

    calculate(math,phy,bio,&average,&percentage);
    
    printf("\n The average of the student is : %.3f",average);
    printf("\n The percentage of the student is : %.3f",percentage);

    return 0;
}

void calculate(int m,int p,int bi,float *average, float *percentage){

    *average = (m +p +bi) /3.0;
    *percentage = (m + p+ bi) /300.0 *100;

}*/

#include <stdio.h>
#include <math.h>

void area_of_triangle(int x,int y,int z,float *area);
int main(){

    int a,b,c,s;
    float  area;

    printf("\n enter the values of a: ");
    scanf("%d",&a);

    printf("\n enter the values of b: ");
    scanf("%d",&b);

    printf("\n enter the values of c: ");
    scanf("%d",&c);

    area_of_triangle(a,b,c,&area);

    printf("\n the area of the triangle is : %.3f",area);
    return 0;

}

void area_of_triangle(int x,int y,int z,float *area){

   int f = (x+y+z)/2;
  //  printf("\n%d",f);
    *area =sqrt( f * (f-x)*(f-y)*(f-z));
   // *area =sqrt (*area);
}