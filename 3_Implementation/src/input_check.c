#include "input_check.h"

int input_check(){

    
    printf("\nEnter the application no. \n");
    int num;
    int response;
    scanf("%d",&num);
    if ((num>16)||(num<0)){
        printf("You have given an wrong input\n\n");

        response= input_check();
    }
    else response= num;
    return response;
}

