/*
* 4 Simple functions that each do their calculations depending on the users choice in calculation.
* After the result has been calculated, it will then check if the calculation has been done correct with TEST_ASSERT_EQUAL_FLOAT.
* How it works is simple: TEST_ASSERT_EQUAL_FLOAT([Expected],[Calculation]([a],[b]); 
* It will then print out the result together with if it received what it expected.
*/

/* Library that will hold the functions, used to be able to call on the functions from main */
#include "Test_file.h"

/* Expects the answer to be 4.0, takes 2.0 + 2.0 */
void Addition(void){
  TEST_ASSERT_EQUAL_FLOAT (4.0, Addition(2.0, 2.0));
}

/* Expects the answer to be 4.0, takes 6.0 - 2.0 */
void Substract(void){
  TEST_ASSERT_EQUAL_FLOAT (4.0, Substract(6.0, 2.0))
}

/* Expects the answer to be 12.0, takes 6.0 * 2.0 */
void Multiply(void){
  TEST_ASSERT_EQUAL_FLOAT (12.0, Multiply(6.0, 2.0))
}

/* Expects the answer to be 3.0, takes 6.0 / 2.0 */
void Divide(void){
 TEST_ASSERT_EQUAL_FLOAT (3.0, Divide(6.0, 2.0))
}
