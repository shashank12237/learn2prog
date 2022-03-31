#include<stdio.h>
int max (int num1, int num2) {
    if(num1>num2){             //check if num1 is greater than num2 
    return num1;               //if so, your answer is num1    
    }
    else {
        return num2;          //otherwise, your answer is num2 
    }
}

int main(void) {
  printf("max(42, -69) is %d\n", max(42, -69));
  printf("max(33, 0) is %d\n", max(33, 0));
  printf("max(0x123456, 123456) is %d\n", max(0x123456, 123456));
  //compute the max of 0x451215AF and 0x913591AF and print it out as a decimal number                                        
  printf("max(0x451215AF, 0x913591AF) is %d\n", max(0x451215AF, 0x913591AF));
  return 0;
}

output 
max(42, -69) is 42
max(33, 0) is 33
max(0x123456, 123456) is 1193046
max(0x451215AF, 0x913591AF) is 1158813103
