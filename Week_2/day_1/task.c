#include<stdio.h>
#include "task.h"



void check_positive_or_negative(signed int num){
    if(num == 0 )
    {
        printf("\n==> Number Is Zero :) \n");
       
    }else if(num > 0){
          printf("\n===>Number %i is positive\n" , num);
    }else{
                  printf("\n===>Number %i is Negative\n" , num);

    }
    
}

/*=================================================*/
void swap_Num(int *num1 , int *num2){

    printf("\n===>Before Swap number1 : (%i) , number2 : (%i) \n " , *num1 , *num2);

    *num1^=*num2;
    *num2^=*num1;
    *num1^=*num2;  

    printf("\n===>After Swap number1 : (%i) , number2 : (%i) \n " , *num1 , *num2);

}

/*=================================================*/
void even_or_odd(int num){
    if(num & 1)
    {
        printf("\n===>%d is odd.\n", num);
    }
    else
    {
        printf("\n===>%d is even.\n", num);
    }

}
/*=================================================*/
/*=================================================*/
/*=================================================*/