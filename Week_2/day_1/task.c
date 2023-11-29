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
char nth_bit(int num , int bit_num){
    return ((num >> bit_num) & 1);
}
/*=================================================*/
int set_bit(int num , int bit_num){
    return (num | (1 << (bit_num - 1))); 
}
/*=================================================*/
int clearBit(int num, int bit_num) 
{ 
    return (num & (~(1 << (bit_num - 1)))); 
} 
/*=================================================*/
int toggleBit(int num, int bit_num) 
{ 
    return (num ^ (1 << (bit_num - 1))); 
} 
/*=================================================*/
void compare_using_ternary(int num_1 , int num_2){
    {
        num_1 > num_2 ?printf("\n===> %i is bigger than  %i\n" , num_1 , num_2) : num_2 > num_1 ? printf("\n===> %i is bigger than  %i\n" , num_2 , num_1) : printf("\n===> %i is equal   %i\n" , num_1 , num_2); 
    }
}
/*=================================================*/
void leap_year(int year){
    if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
}
/*=================================================*/
void even_odd(int num){
    if (num % 2 == 0)
    {
        printf("\n====>number %i is even \n" , num);
    }else{
                printf("\n====>number %i is odd \n" , num);

    }
    
}
/*=================================================*/
void largest_num(float n1 , float n2 ,float n3){
    if(n1 >= n2){
        if (n1 >= n3)
        {
               printf("%.2f is the largest number.", n1);

        }else if(n3 >= n2){
             printf("%.2f is the largest number.", n3);
        }else{
            printf("%.2f is the largest number.", n2);
        }
        
    }else if(n2 > n3)
    {
                    printf("%.2f is the largest number.", n2);
    }else{
                     printf("%.2f is the largest number.", n3);

    }
    
    
}
/*=================================================*/
    void grad_result(int n1 , int n2 ,int n3 , int n4 , int n5){
        int  percent = (n1+n2+n3+n4+n5)/5;
        if(percent > 80){
            printf("A+");
        }else if(percent >= 65 && percent <= 80)
        {
                        printf("A");

        }else if(percent >= 50 && percent <= 56)
        {
                        printf("B");

        }else if(percent >= 42 && percent <= 50)
        {
                        printf("C");

        }else if(percent <= 42)
        {
                        printf("Fail");

        }else 
        {
                        printf("Please Repeat and eneter valid numbers \n");

        }
        
    }
/*=================================================*/
/*=================================================*/