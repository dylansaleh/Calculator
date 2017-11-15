#include "unity.h"
#include "Test_File.h"

int main(void){
UNITY_BEGIN();
  
/*Tests the calculations*/
RUN_TEST(Addition); 
RUN_TEST(Substract);
RUN_TEST(Multiply);
RUN_TEST(Divide);
  
return UNITY_END();
}
