#include<stdio.h>

void main(){

    int age = 75;

    if(age>80){
        printf("You are allowed to drive an You are a senior citizen\n");
    }

    else if (age>=75){
        printf("You are allowed to drive and You are older\n");
    }

    else if (age>60){
        printf("You can drive\n");
    }

    else{
        printf("You are not allowed to drive\n");
    }

}