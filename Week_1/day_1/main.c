#include <stdio.h>
#include "task.h"


int main()
{
    float avg = average_3_numbers(3,3,5);
    printf("\nAverage is : %0.2f \n" , avg);

    /**======================================================================*/

  display_datatypes(5 , 54.45 , 'a' , 1323432435 , 3476.98479586547  );


    /**======================================================================*/
    int test_num1 = 23;
    int test_num2 = 53;
    printf("Before Swapping : num1 = %d , num2 = %d\n" , test_num1 , test_num2);
    swap_num(&test_num1 , &test_num2);
    printf("After Swapping : num1 = %d , num2 = %d\n" , test_num1 , test_num2);

    printf("\n============================================================\n");
    /**======================================================================*/
    quotient_and_remainder(5,2);
    /**======================================================================*/
    personal_data();
    /**======================================================================*/

    return 0;
}
