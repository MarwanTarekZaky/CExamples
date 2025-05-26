#pragma region Header
/******************************************************************************
 * @file           hello.c
 * @brief          Short summary of the file/module functionality
 *
 * Detailed description:
 * Provide a detailed description of what this module/file does, how it works,
 * and any relevant dependencies or background.
 *
 * -----------------------------------------------------------------------------
 * @author         Marwan
 * @date           2025-05-25
 * @version        1.0.0
 * @project        Project or product name
 * @module         Module name or identifier
 * @platform       Target MCU/Platform (e.g., STM32, Infineon AURIX)
 * @compiler       Compiler used (e.g., IAR, GCC, Clang, MSVC)
 * @license        Proprietary
 * -----------------------------------------------------------------------------
 * @references
 * - List related documents or specs, e.g., AUTOSAR_SWS_xxx.pdf
 *
 * @note
 * Special notes or warnings (e.g., reentrancy, timing constraints, etc.)
 *
 * @todo
 * - Describe any pending tasks, TODOs, or improvements
 *
 * @history
 * Date        | Author       | Version  | Comment
 * ------------|--------------|----------|-------------------------------
 * 2025-05-25 | Marwan       | 1.0.0    | Initial version
 ******************************************************************************/
#pragma endregion Header

#define HELLO_C
#ifndef HELLO_C
// Prevent multiple inclusions of this header file
// This is a common practice in C to avoid redefinition errors
#endif // HELLO_C
#pragma region Includes
#include <stdio.h>
#include <stdint.h> // For fixed-width integer types
#include <stdlib.h> // For general purpose functions
#include <string.h> // For string manipulation functions
#include <stdbool.h> // For boolean type support
#include <math.h> // For mathematical functions
#pragma endregion Includes
#pragma region Constants
const int MAX_AGE = 120; // Example constant, adjust as needed
const double PI = 3.14;
#pragma endregion Constants
#pragma region Macros
// Define any macros here
#define circleArea(r) (PI*(r)*(r))
#pragma endregion Macros
#pragma region Typedefs
// Define any typedefs here
#pragma endregion Typedefs
typedef unsigned char u_int8_t; // Example typedef for an unsigned 8-bit integer
typedef unsigned short u_int16_t; // Example typedef for an unsigned 16-bit integer
#pragma region Enums
// Define any enums here
#pragma endregion Enums
#pragma region Structs
// Define any structs here
struct hello
{
    int id; // Example member variable
    char name[50]; // Example member variable
};
struct __attribute__((__packed__)) person
{
    char name[50]; // Example member variable
    int age; // Example member variable
    float height; // Example member variable
    double weight; // Example member variable
    bool isEmployed; // Example member variable
};

#pragma endregion Structs
#pragma region Function Prototypes
// Declare function prototypes here
int addNumbers(int a, int b); // Example function prototype
float calculateSum(float arr[], size_t size);
void swap(int* a, int* b);
int isLittleEndian(void){
    u_int16_t num = 0x0001; // Example number
    // Check the least significant byte
    if(*(u_int16_t*)&num == 0x01){
        return 1; // Little-endian
    } else {
        return 0; // Big-endian
    }
}
#pragma endregion Function Prototypes
#pragma region Global Variables
// Declare global variables here
int global = 19;
#pragma endregion Global Variables
#pragma externals
extern int current;
#pragma endregion externals
#pragma region Function Definitions
// Define functions here
#pragma endregion Function Definitions
#pragma region Main
int main(){
    printf("Hello World!\n"); // for testing purposes
    // int age = 0;
    // char c = 'a';
    // float f = 3.14f;
    // double d = 2.718281828459045;
    // short int shorty = -32768; // Example of a short integer
    // unsigned int u = 4294967295; // Example of an unsigned integer
    // long int l = 9223372036854775807; // Example of a long integer
    // unsigned long int ul = 1846744073709551615; // Example of an unsigned long integer
    // long long int ll = 9223372036854775807; // Example of a long long integer
    // u_int64_t u64 = 1844674407370955161; // Example of a 64-bit unsigned integer
    // u_int8_t u8 = 255;
    // long double ld = 3.402823466e+38L; // Example of a long double
    // bool isTrue = true; // Example of a boolean variable
    // char str[] = "Hello, World!"; // Example of a string
    // size_t size = sizeof(int) * 10;
    // register u_int8_t r8 = 34;
    // static u_int16_t s16 = 256;

 
    // printf("age= %d\n", age);
    // printf("Age = %i\n", age);
    // printf("C = %c\n", c);
    // printf("f = %f\n", f);
    // printf("d = %lf\n", d);
    // printf("shorty = %hd\n", shorty);
    // printf("u = %u\n", u);
    // printf("l = %ld\n", l);
    // printf("ul = %lu\n", ul);
    // printf("ll = %lld\n", ll);
    // printf("u64 = %llu\n", u64);
    // printf("u8 = %hhu\n", u8);
    // printf("ld = %Lf\n", ld);
    // printf("isTrue = %s\n", isTrue ? "true" : "false");
    // printf("str = %s\n", str);
    // printf("Size of size_t = %zu bytes\n", size);

    // printf("Enter number: \n");
    // int number;
    // float fNumber;
    // scanf("%d%f", &number, &fNumber);
    // printf("The addition of those number is = %i\n", addNumbers(number, (int)fNumber));
    // goto jump;
   
    // jump:
    //     printf("Went to jumping!\n");
    // printf("Enter 5 numbers followed by space\n");
    // int intgers[5];
    // for(size_t i = 0; i < 5; i++){
    //     scanf("%d", &intgers[i]);
    // }
    // for (size_t i = 0; i < 5; i++)
    // {
    //     printf("Number %zu is %d\n", i + 1, intgers[i]);
    // }
    // float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

    // // num array is passed to calculateSum()
    // result = calculateSum(num, 6); 
    // printf("Result = %.2f", result);
    
    // int c = 9;
    // int* ptr = &c;
    // printf("Value of c = %d\n", c);
    // printf("Address of c = %p\n", (void*)&c);
    // printf("Value of ptr = %p\n", (void*)ptr);
    // printf("Value pointed to by ptr = %d\n", *ptr);
    // char* c = "Hello, World!";
    // int x[6];
    // printf("String: %s\n", c);
    // scanf("%d", x+3);
    // printf("Value at x[3]: %d\n", *(x+3));
    // printf("Value at x[3]: %d\n", x[3]);
    // int* arr = (int*)malloc(5 * sizeof(int)); // Dynamic memory allocation
    // if (arr == NULL) {
    //     fprintf(stderr, "Memory allocation failed\n");
    //     exit(1); // Exit if memory allocation fails
    // }
    // for (size_t i = 0; i < 5; i++) {
    //     arr[i] = i * 10; // Initialize the array
    // }
    // printf("Dynamic array values:\n");
    // for (size_t i = 0; i < 5; i++) {
    //     printf("arr[%zu] = %d\n", i, arr[i]);
    // }
    // arr = realloc(arr, 10 * sizeof(int)); // Resize the allocated memory
    // free(arr); // Free the allocated memory
    // char name[30];
    // fgets(name, sizeof(name), stdin); // Read a string from standard input
    // // Remove newline character if present
    // fputs(name, stdout); // Print the string to standard output
    // struct hello h;
    // h.id = 1; // Initialize struct member
    // snprintf(h.name, sizeof(h.name), "Hello Struct"); // Initialize struct member
    int(*funcPtr)(int ,int);
    funcPtr = addNumbers;
    return 0;
}
#pragma endregion Main

#pragma region Function Implementations
int addNumbers(int a, int b) {
    return a + b; // Example function implementation
}
float calculateSum(float arr[], size_t size){
    float sum = 0.0f;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum; // Example function implementation
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp; // Example function implementation
}
#pragma endregion Function Implementations