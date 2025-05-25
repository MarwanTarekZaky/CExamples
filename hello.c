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

#pragma region Includes
#include <stdio.h>
#pragma endregion Includes
#pragma region Macros
// Define any macros here
#pragma endregion Macros
#pragma region Typedefs
// Define any typedefs here
#pragma endregion Typedefs
#pragma region Enums
// Define any enums here
#pragma endregion Enums
#pragma region Structs
// Define any structs here
#pragma endregion Structs
#pragma region Function Prototypes
// Declare function prototypes here
#pragma endregion Function Prototypes
#pragma region Global Variables
// Declare global variables here
#pragma endregion Global Variables
#pragma region Constants
const int MAX_AGE = 120; // Example constant, adjust as needed
const double PI = 3.14;
#pragma endregion Constants
#pragma region Function Definitions
// Define functions here
#pragma endregion Function Definitions
#pragma region Main
int main(){
    printf("Hello World!\n"); // for testing purposes

#pragma region A1
    int age = 0;
    char c = 'a';
    printf("age = %d\n", age);
    printf("C = %c\n", c);
#pragma endregion A1
    return 0;
}
#pragma endregion Main