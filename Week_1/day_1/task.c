#include<stdio.h>
#include "task.h"

float average_3_numbers(float num1 , float num2 , float num3){
    return ((num1 + num2 + num3) / 3) ;
}

/**================================================*/

void display_datatypes(int integer_num, float  float_num  , char char_num , long long_num , double double_num ){
    printf("\n=======================================================\n");
    printf("Type int is : %d\n" , integer_num );
    printf("Type float is : %f\n" , float_num );
    printf("Type char is : %c\n" ,char_num );
    printf("Type int is : %ld\n" , long_num );
    printf("Type int is : %lf\n" ,double_num);
    printf("\n=======================================================\n");
}
/**================================================*/

void swap_num(int *num1 , int *num2){
    int temp = 0;

     temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
}
/**================================================*/
void quotient_and_remainder(int num1 , int num2){
    printf("Quotient of \"%i\" and \"%i\" is : %i\n" , num1 , num2 , num1 / num2);
    printf("Remainder of \"%i\" and \"%i\" is : %i\n" , num1 , num2 , num1 % num2);
}
/**================================================*/
void personal_data(void){
    char personal_Id[14];
    char name[50];
    int age = 0 ;
    char department[40];
    char fav_hobby[30];

    printf("\n================= Enter your data : =====================\n");
    printf("Enter Personal Id : ");
    gets(personal_Id);
    printf("Enter Name : ");
    gets(name);
    printf("Enter Age : ");
    scanf("%i" , &age );
    fflush(stdin);
    printf("Enter Department : ");
    gets(department);
    printf("Enter Favourite Hobby : ");
    gets(fav_hobby);
    
    printf("\n================== Data you Enterd is : ====================\n");
    printf("Personal Id is : %s\n" , personal_Id);
    printf("=>==> Name is : %s\n" , name);
    printf("=>==> Personal Id is : %i\n" , age);
    printf("=>==> Personal Id is : %s\n" , department);
    printf("=>==> Personal Id is : %s\n" , fav_hobby);

}
/**================================================*/