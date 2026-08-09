#include <stdio.h>

int main() {
    // 1. Character types
    char letter = 'A';
    char name[] = "Alice";

    // 2. Integer types
    int age = 25;
    long long huge_number = 9876543210LL;

    // 3. Floating-point types
    float GPA = 3.8f;
    double pi = 3.1415926535;

    // Printing using basic format specifiers
    printf("--- Basic Format Specifiers in C ---\n");
    
    printf("Character (%%c): %c\n", letter);
    printf("String (%%s): %s\n", name);
    
    printf("Integer (%%d or %%i): %d\n", age);
    printf("Long Long (%%lld): %lld\n", huge_number);
    
    printf("Float (%%f): %f\n", GPA);
    printf("Float with 1 decimal point (%%.1f): %.1f\n", GPA);
    
    printf("Double (%%lf): %lf\n", pi);
    printf("Double with 4 decimal points (%%.4lf): %.4lf\n", pi);

    return 0;
}
