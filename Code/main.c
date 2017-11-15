#include "unity.h"
#include "Test_File.h"

int main(void){
UNITY_BEGIN();

TestAddition(void){
  Actual = Addition(2,3);
  Expected = 5;
  AssertEqual(Actual, Expected)
}
 
TestSubstract(void){
  Actual = Substract(3,2);
  Expected = 1;
  AssertEqual(Actual, Expected)
} 
  
TestMultiply(void){
  Actual = Multiply(2,3);
  Expected = 6;
  AssertEqual(Actual, Expected)
} 

TestDivide(void){
  Actual = Divide(10,5);
  Expected = 2;
  AssertEqual(Actual, Expected)
} 

return UNITY_END();
}
