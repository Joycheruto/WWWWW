// #include <stdio.h>
// #include <conio.h>


// int main(){

//     int age [5];


//     printf("enter  5 elements only");
//     for (int i = 0;i<5;i++){
     
//         scanf("%d",&age[i]);
      
       
//     }
//        for (int i = 0;i<5;i++){
//          printf("%d",age[i]);
       
//     }
    
//     return 0;
// }

// #include <stdio.h>
//  #include <conio.h>


//  int main(){


//     int i,size,age[10],temp;

//     printf("enter the size of array: ");
//     scanf("%d",&size);

//     printf("elements of  the array\n");
//     for (i=0;i<size;i++){
//         scanf("%d",&age[i]);
//     }
//     printf("sorting process starts here:  ");

//     for(i=0;i<size;i++){
//         for(int j = i+1;j<size;j++){
//             if(age[i]> age[j])
//             {
//                 temp = age[i];
//                 age[i] = age[j];
//                 age[j] = temp;
//             }
//         }
//     }
// printf("the elements are sorted\n");
// for(i = 0;i<size;i++){
//     printf("%d\n",age[i]);
//     }
//     return 0;
//  }

#include <stdio.h>
#include <conio.h>

int main (){

    int flag = 0,i,key,arr[5];

    printf("initialize the array:\n");
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched: \n");
    scanf("%d",&key);

    for(i=0;i<5;i++){
        if (key == arr[i]){
            printf("\nelement found:");
            printf("elements is %d\n",arr[i]);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    printf("\n element not found\n");
    return 0;
}