#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';
    
    // Typecasting examples
    float result1 = (float)a / 3;  // int to float
    int result2 = (int)b * 2;      // float to int
    char result3 = (char)(c + 1);  // char to int and then back to char
    
    printf("Typecasting examples:\n");
    printf("result1: %f\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %c\n", result3);
    
    // Precedence examples
    int x = 5, y = 2, z = 3;
    int result4 = x + y * z;     // '*' has higher precedence than '+'
    int result5 = (x + y) * z;   // '+' has higher precedence than '*'
    int result6 = x / y + z;     // '/' has higher precedence than '+'
    int result7 = x / (y + z);   // '(' and ')' can be used to change precedence
    
    printf("\nPrecedence examples:\n");
    printf("result4: %d\n", result4);
    printf("result5: %d\n", result5);
    printf("result6: %d\n", result6);
    printf("result7: %d\n", result7);
    
    return 0;
}
