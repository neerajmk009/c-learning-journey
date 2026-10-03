#include<stdio.h>

void main(){

    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch(a){

        case 1:
        printf("You entered 1\n");
        case 2:
        printf("You Entered 10\n");
        case 3:
        printf("You entered 20\n");
        case 4:
        printf("You entered 30\n");

        default:
        printf("Noting matched");
    
    }
}
