#include<stdio.h>

void main(){

    if(1){
        printf("This is executed\n");
    }

    if(2580){
        printf("This also executed\n");
    }

    if(2.56){
        printf("This is also executed\n");
    }

    if('A'){
        printf("This is a character\n");
    }

    if(0){
        printf("This");
        // Zero is not executed 
       }
}
