/*#include <stdio.h>
#include <conio.h>


int main(){

    int i = 22 ; 
        switch ( i ) 
        { 
            case 121 : 
                printf ( "I am in case 121 \n" ) ; 
                break ; 
            case 7 : 
                printf ( "I am in case 7 \n" ) ; 
                break ; 
            case 22 : 
                printf ( "I am in case 22 \n" ) ; 
                break ; 
            default : 
                printf ( "I am in default \n" ) ; 
        } 
        return 0;
}



#include <stdio.h>
#include<conio.h>


int main(){

    char suite = 2;
    switch (suite)
    {
        case 1:
            printf("\nDiamond");
            break;
        case 2:
            printf("\nSpade");
            break;
        default:
            printf("\nHeart");
    
    }
    printf("\n I thought one wears a suite");


}


#include <stdio.h>
#include <conio.h>


int main (){

    int k, j = 2 ; 
        switch ( k = j + 1 ) 
        { 
            case 0 : 
                printf ( "\nTailor") ; 
                break;
            case 1 : 
                printf ( "\nTutor") ;
                break; 
            case 2 : 
                printf ( "\nTramp") ; 
                break;
            default : 
                printf ( "\nPure Simple Egghead!" ) ; 
        } 
}




#include <stdio.h>
#include <conio.h>


int main(){

    int ch = 'a' + 'b' ; 
        switch ( ch ) 
        { 
        case 'a' : 
    
        case 'b' : 
            printf ( "\nYou entered b" ) ; 
            break;
        case 'A' : 
            printf ( "\na as in ashar" ) ; 
            break;
        case 'a'+'b' : 
            printf ( "\nYou entered a and b" ) ; 
            break;
        default:
            printf("\naydb");
        } 

        return 0;


}

#include<stdio.h>
#include<conio.h>

int main(){

    int i = 1 ; 
        switch ( i - 2 ) 
        { 
            case 9: 
                printf ( "\nFeeding fish" ) ; 
                break;
            case 0 : 
                printf ( "\nWeeding grass" ) ;
                break; 
            case -1 : 
                printf ( "\nmending roof" ) ;
                break; 
            default : 
                printf ( "\nJust to survive" ) ; 
    
        } 

 return 0;
} */

#include <stdio.h>
#include <conio.h>

int main(){

       int class_obtained,sub_failed,marks;
       
       printf("Enter class obtained: \t");
       scanf("%d",&class_obtained);

       printf("Enter the number of subjects failed: \t");
       scanf("%d",&sub_failed);

       switch(class_obtained){

                case 1:
                    if(sub_failed>3){
                        printf("No grace!!");
                    }else(sub_failed<=3);{
                        marks = 5* sub_failed;
                        printf("%d",marks);
                    }
                    break;
                case 2:
                    if(sub_failed>2){
                        printf("No grace for you ghurl!!");
                    }else{
                        marks = 4* sub_failed;
                        printf("%d",marks);
                    }
                    break;
                case 3:
                    if (sub_failed>1){
                        printf("no Grace Period!!!");
                    }else(sub_failed==1);{
                        marks = 5 * sub_failed;
                        printf("%d",marks);
                    }
                    break;
                default:
                        printf("INVALID INPUT]");



       }



} 

/*GO GIRLLL GO  GIRLLY*/


































