#include "unity.h"
#include "Test_File.h"

int main(void){
UNITY_BEGIN();
  
/*Tests the calculations*/
RUN_TEST(Addition(2, 3)); 
RUN_TEST(Substract(3, 2));
RUN_TEST(Multiply(5, 2));
RUN_TEST(Divide(10, 5));
  
return UNITY_END();
}
