/*
* 4 Simple functions that each do their calculations depending on the users choice in calculation.
* After the result has been calculated, it will then check if the calculation has been done correct with an "Expect" variable.
* It will then return and print out the result together with the result of the "Expect" statement.
*/

#include "Test_file.h"

/* Recieves 2 integers and adds them together */
float Addition(float a, float b){
  return a + b;;
}

/* Recieves 2 integers and substracts a with b */
float Substract(float a, float b){
  return a - b;
}

/* Recieves 2 integers and multiplies a with b */
float Multiply(float a, float b){
  return a * b;
}

/* Recieves 2 integers and divides a with b */
float Divide(float a, float b){
  return a / b;
}
