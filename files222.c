#include <stdio.h>

int main (){
    FILE *fptr  =fopen ("secondfile.txt","w");
    if (fptr ==NULL){
       printf("ERROR OPENING FILE\n");
        return 1;
    }
    printf("file opened successfully");


    fprintf(fptr,"this is a  line of text\n");
    fprintf(fptr,"lor please come through for me ,i am tired...");
    fclose(fptr);
    fptr =fopen("secondfile.txt","r");
  
  
    return 0;
}