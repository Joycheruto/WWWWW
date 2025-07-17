// #include <stdio.h>
// #include <conio.h>

// int perimeter(int a,int b);
// int main(){

//     int lenght,width,res;
//     printf("\nEnter the lenght: \n");
//     scanf("%d",&lenght);

//     printf("\nEnter the width: \n");
//     scanf("%d",&width);

//    answer= perimeter(lenght,width);

//     printf("\n perimeter is:%d ",answer);
//     return 0;

    
// }

// int perimeter(int x,int y){

//     int result;
//     result = 2*(a+b);
//     return result;

// }



#include <stdio.h>
#include <conio.h>

// int main(){
//     int n,sum = 0;
//     n= 10;

//     // printf("Enter an integer:");
//     // scanf("%d",&n);

//     for( int i = 1;i<=n;i++){
        

//         if (i %2 ==0){
//             sum=sum+i;
//         }


//     }
//     printf("sum of the even integers are: ",sum);
//     return 0;
// }

int main (){
    int sum = 0;
    for(int i = 0;i<=10;i+2){
        sum = sum +i;
    }
    printf("sum of even numbers: ",sum);
    return 0;
}