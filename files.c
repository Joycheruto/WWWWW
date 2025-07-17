

int main(){
    FILE *fptr;
    fptr = fopen("newfile.txt","w+");
char ch;
if (fptr != NULL){
    while ((ch = fgetc(fptr)) != EOF){
        putchar(ch);
    }
 
// }
if (fptr != NULL){
    fputs("newline is appended.\n",fptr);
}

    fclose(fptr);
    return 0;

    // if (fptr == NULL){
    //     perror("ERROR");
    // }
   
}
}