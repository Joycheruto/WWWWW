/*#include <stdio.h>
#include <stdlib.h>

int main()
{

    int luckyNumbers[] = {4,45,67,68,88,344};
    luckyNumbers[3] = 2000;
    printf("%d", luckyNumbers[3]);

   /*char colors [2]= {"blue","red","white"};
    printf("%s",colors[2]); 
    return 0;


}
#include <stdio.h>
#include <conio.h>

int main(){

    int i,sum,average;
    int age[5];

   // int age[5]={20,30,40,50,60};//declaration of integers at declaration time
    printf("\n INITIALIZE THE ARRAYS");
    for (i = 0;i<5;i++){
        printf("\n Enter the elements\t");
        scanf("%d",&age[i]);
       
     //   printf("\n the array is:%d",age[0]);
    }
     sum = sum +age[i];
    average = sum/5;
    printf("\n values of the array:s");
    for(i=0;i<5;i++){
        printf("\t%d",age[i]);
    }
    printf("\n sum = %d",sum);
    printf("\n average : %d",average);
    //printf("\n size of the array:%u\n ",sizeof(age));
    //printf("\n element at location zero = %d\n",age[3]);
    return 0;
}

#include <stdio.h>
#include <conio.h>

int main(){
    int age[5];
    int i,temp,j;

    printf("\n INITIALIZE THE ARRAY");
    for(i=0;i<5;i++){
        printf("\n enter the next element");
        scanf("%d",&age[i]);
      //  sum = sum+age[i];
    }
    printf("\nELEMENTS BEFORE BEING SORTED");
    printf("\n SORTING THE ELEMENTS");
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if (age[i] > age [j]){
            temp = age[i];
            age[i] = age[j];
            age[j]= temp;
        }
    }
    }
    printf("\n sorted array");
    for(i=0;i<5;i++){
        printf("%d\t",age[i]);
    }
    return 0;
}

#include <stdio.h>


int main (){

    int flag = 0,age[7];
    int key,i;
    printf("\n initialize the array");

    for (i=0;i<7;i++){
    scanf("%d",&age[i]);

    }
    printf("\n ENTER THE ELEMENT TO BE SEARCHED");
    scanf("%d",&key);
    for(i=0;i<7;i++){
        if (age[i]==key){
            printf("\n element found");
            printf("\n element is %d",age[i]);
            printf("\n location  is %d",i);
            flag=1;
            break;
        }
    }
    if (flag==0)
    printf("\nelement not found");
return 0;
}


#include <stdio.h>
#include <conio.h>

int main(){

    int matrix[2][2]={2,3,4,5};
    int i,j;

    for(i=0;i<2;i++){
        printf("\n\n");
        for(j=0;j<2;j++){
            printf("%d\t",matrix[i][j]);
        }
    }
    printf("\n size of the matrix %u",sizeof(matrix));
    return 0;
} 

#include <stdio.h>
#include <conio.h>

int main (){


    int average,sum=0;
    int i;
    int marks[10];  //array declaration

    for(i=0;i<4;i++){
        printf("\n Enter marks: ");
        scanf("%d",&marks[i]);//store data in array
    }

    for(i=0;i<4;i++){
        sum = sum +marks[i]; // read data from an arrray
        printf("\n sum is %d",sum);
        average = sum/30;

        
        printf("\n Average marks is %d",average);
    }

    return 0;
}

// there is an error in the below code of passing an array to a function
#include <stdio.h>
#include <conio.h>
int display (int y);

int  main(){
    int i;
    int marks[]= {2, 4, 12, 5, 45, 5 ,88} ;
    
    for(i=0;i<7;i++){
        display(&marks[0],6);
    }

int  display(int *m){
        printf("%d",*m);
    }
    return 0;
}*/



#include <stdio.h>
#include <conio.h>
// int  main(){
   
//     // int marks[7]= {2, 4, 12, 5, 45, 5 ,88} ;
    
//     // for(int i=0;i<7;i++){
//     //     printf("%d\t",marks[i]);
//     // }
//     int Fruits =5;
//     printf("%d",Fruits);
//     return 0;
// }

int main (){
    int i,j,matrixA[2][2],matrixB[2][2];

    printf("we are starting with A");

    for(i=0;i<2;i++){
        for (j=0;j<2;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }


    printf("we move on to matrixb");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&matrixB[i][j]);
        }
    };

    printf("this nis the point where we add");

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++){
            printf("%d\t",matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n ");
    }
    return 0;
}