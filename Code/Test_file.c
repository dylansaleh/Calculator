/*
* 4 Simple functions that each do their calculations depending on the users choice in calculation.
* After the result has been calculated, it will then check if the calculation has been done correct with an "Expect" variable.
* It will then return and print out the result together with the result of the "Expect" statement.
*/

#include "Test_file.h"

/* Recieves 2 integers and adds them together */
void Addition(void){
  TEST_ASSERT_EQUAL_FLOAT (4.0, Addition(2.0, 2.0));
}

/* Recieves 2 integers and substracts a with b */
void Substract(void){
  TEST_ASSERT_EQUAL_FLOAT (4.0, Substract(6.0, 2.0))
}

/* Recieves 2 integers and multiplies a with b */
void Multiply(void){
  TEST_ASSERT_EQUAL_FLOAT (12.0, Multiply(6.0, 2.0))
}

/* Recieves 2 integers and divides a with b */
void Divide(void){
 TEST_ASSERT_EQUAL_FLOAT (3.0, Divide(6.0, 2.0))
}
