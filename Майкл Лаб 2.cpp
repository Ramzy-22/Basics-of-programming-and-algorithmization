
//Задание 1
#include <cmath>
#include <iostream>
#include <bitset>
#include <tchar.h>
using namespace std;



int main() {
    /*int y; // Define y as an integer
    cout << "Enter a value for y: ";
    cin >> y;

    // Determine the number of bits for an int on this platform
    int numBits = sizeof(y) * 8;

    // Option a) Print the full binary representation with all bits
    cout << "Full binary representation: ";
    for (int i = numBits - 1; i >= 0; --i) {
        cout << ((y >> i) & 1); // Print each bit from highest to lowest
    }
    cout << std::endl;

    // Option b) Print binary without leading zeros
    cout << "Condensed binary representation: ";
    bool significantBitFound = false;
    for (int i = numBits - 1; i >= 0; --i) {
        if ((y >> i) & 1) {
            significantBitFound = true; // Start printing after first 1
        }
        if (significantBitFound) {
            cout << ((y >> i) & 1);
        }
    }
    if (!significantBitFound) {
        cout << "0"; // Output "0" if y is 0
    }
    cout << std::endl;

    return 0;
    */

    cout << "====================================================================\n\n";

    //Question 1.2

       /* int y;
        std::cout << "Enter an integer value for y: ";
        std::cin >> y;

        int numBits = sizeof(int) * 8; // Determine the bit width of int on this platform
        int countOnes = 0;             // Counter for the number of 1-bits

        // Count the number of 1 bits in y
        for (int i = 0; i < numBits; ++i) {
            if ((y >> i) & 1) {        // Check if the ith bit is 1
                ++countOnes;           // Increment the count for each 1 bit found
            }
        }

        // Create a new integer with 'countOnes' number of 1 bits at the right end
        int result = (1 << countOnes) - 1; // This gives a number with 'countOnes' 1-bits on the right

        std::cout << "Result after shifting all 1s to the right: " << result << std::endl;

        return 0;
        */

        cout << "========================================================================\n\n";
        //Question 1.3

      /*int sRes, sNum;

        sRes = 17;
        sNum = 22;

        sRes = sNum & 0x7FF7;//Goal: Turn off the highest bit (15th) and match other bits.
        cout << sRes <<"\n";
        sRes = sNum | 0x0FF0;//Turn bits 11 through 8 to 1, keep the highest bit (15th) as 1.
        cout << sRes <<"\n";
        sRes = sNum & 0x0008;// Keep only the 3rd bit (value 0x0008), turning all others off.
        cout << sRes <<"\n";
        sRes = sNum & 0x7F08;//Clear the highest bit (15th), turn bits 14 through 8 to 1.
        */

    
        cout << "======================================================================\n\n";
        //Question 2.1
        /*
        
#define _USE_MATH_DEFINES // Enables M_PI and other constants


int main() {
    float radius = 5.0;
    float circumference = 2 * M_PI * radius; // Formula for circumference using M_PI
    std::cout << "Circumference: " << circumference << std::endl;
    return 0;
}

*/
        cout << "====================================================================\n\n";

        //Question2.2
        /*

#define _USE_MATH_DEFINES // Enables M_PI if required


        // Define the macro for circumference calculation
#define LENGTH(radius) (2 * M_PI * (radius))

        int main() {
            float l1 = LENGTH(1 + 2);     // Calculates circumference with radius 3
            float l2 = 1 / LENGTH(2);     // Divides 1 by the circumference with radius 2

            std::cout << "L1: " << l1 << std::endl; // Should print approximately 18.8495
            std::cout << "L2: " << l2 << std::endl; // Should print approximately 0.07957

            return 0;
        }
        */


        cout << "====================================================================\n\n";
     //Question 2.2.2*
        /*

#define MAX(A, B) ((A) > (B) ? (A) : (B))

        int main() {
            int i = 10, j = 12, k;

            // 1. Basic usage
            k = MAX(i, j);
            // Explanation: This assigns the larger of `i` (10) and `j` (12) to `k`.
            // Result: k = 12

            // 2. Multiplying the result
            k = MAX(j, i) * 2;
            // Explanation: `MAX(j, i)` is 12, so `k` is assigned `12 * 2`.
            // Result: k = 24

            // 3. Using expressions as arguments
            k = MAX(j, i + 3);
            // Explanation: Here, `i + 3` becomes 13, so `MAX(j, i + 3)` compares 12 and 13.
            // Result: k = 13

            // 4. Side effects with post-increment and post-decrement
            k = MAX(i--, j++);
            // Explanation: Here, `MAX(i--, j++)` uses `i--` and `j++`, which means:
            //    - The macro sees `i` as 10 (before decrement) and `j` as 12 (before increment).
            //    - After the comparison, `i` becomes 9 and `j` becomes 13 due to `--` and `++`.
            // Result: k = 12, i = 9, j = 13

            std::cout << "Final values: i = " << i << ", j = " << j << ", k = " << k << std::endl;
            return 0;
        }

        inline int MAX(int A, int B) {
    return (A > B) ? A : B;

}


        */

        cout << "==============================================================================\n\n";


        //Question 2.2.3
        /*


#define EXCHANGE(X, Y) do { int temp = X; X = Y; Y = temp; } while (0)

        int main() {
            int x1 = 1, y1 = -1;
            EXCHANGE(x1, y1); // Swaps x1 and y1
            std::cout << "x1: " << x1 << ", y1: " << y1 << std::endl; // Should print x1: -1, y1: 1

            int x2 = 100, y2 = -100;
            EXCHANGE(x2, y2); // Swaps x2 and y2
            std::cout << "x2: " << x2 << ", y2: " << y2 << std::endl; // Should print x2: -100, y2: 100

            return 0;
        }

        //To make EXCHANGE work with different types, you could use an inline template function, which allows type inference for the variables involved

        template <typename T>
        void exchange(T& X, T& Y) {
            T temp = X;
            X = Y;
            Y = temp;
        }
        */
        cout << "======================================================================\n\n";
      //Question 2.4
        /*


        void printConfiguration() {
#ifdef _DEBUG
            // Code to run in Debug mode
            std::cout << "Debug configuration!" << std::endl;
            std::cout << "File: " << __FILE__ << std::endl;
            std::cout << "Line: " << __LINE__ << std::endl;
            std::cout << "Date: " << __DATE__ << std::endl;
            std::cout << "Time: " << __TIME__ << std::endl;
            std::cout << "Function: " << __func__ << std::endl;
#else
            // Code to run in Release mode
            std::cout << "Release configuration!" << std::endl;
#endif
        }

        int main() {
            printConfiguration();
            return 0;
        }
        */
        cout << "======================================================================\n\n";
/*
    Question 2.5



        int main() {
            // Define a TCHAR variable that adapts based on whether _UNICODE is defined
            TCHAR myChar = _T('A');  // _T() macro ensures the character type matches TCHAR

#ifdef _UNICODE
            std::wcout << L"Unicode mode: " << myChar << std::endl; // For wide character output
#else
            std::cout << "Non-Unicode mode: " << myChar << std::endl; // For single-byte character output
#endif

            return 0;
        }
*/
        cout << "======================================================================\n\n";
      //Questiom 3
        // 1.h
        /*
#ifndef HEADER1_H
#define HEADER1_H

        enum MyEnum {
            My1 = 1,  // Default values
            My2 = 2,
            My3 = 3
        };

#endif // HEADER1_H

        // 2.h
#ifndef HEADER2_H
#define HEADER2_H

        enum MyEnum {
            My1 = 5,  // Different values for Release mode
            My2 = 6,
            My3 = 7
        };

#endif // HEADER2_H



#ifdef _DEBUG
    #include "1.h"  // Include 1.h in Debug mode
#else
    #include "2.h"  // Include 2.h in Release mode
#endif

int main() {
    MyEnum value = My1;

    #ifdef _DEBUG
        std::cout << "Debug mode - My1: " << value << std::endl;
    #else
        std::cout << "Release mode - My1: " << value << std::endl;
    #endif

    return 0;
}

*/

        cout << "================================================================";
      //QUESTION 4
        /*
            

int main() {
    // Declare and initialize variables of different types
    int intVar = 42;
    double doubleVar = 3.14;
    char charVar = 'A';

    // Declare pointers and initialize them with the addresses of the variables
    int* intPtr = &intVar;        // Pointer to an integer
    double* doublePtr = &doubleVar; // Pointer to a double
    char* charPtr = &charVar;      // Pointer to a char

    // Output the values of the variables and the values pointed to by the pointers
    std::cout << "intVar: " << intVar << ", Address: " << intPtr << ", Value via pointer: " << *intPtr << std::endl;
    std::cout << "doubleVar: " << doubleVar << ", Address: " << doublePtr << ", Value via pointer: " << *doublePtr << std::endl;
    std::cout << "charVar: " << charVar << ", Address: " << static_cast<void*>(charPtr) << ", Value via pointer: " << *charPtr << std::endl;

    return 0;
}
*/
        //Question 4a
        /*


        int main() {
            // Declare a char pointer and initialize it with a string literal
            const char* strPtr = "Hello"; // Pointer to string literal (const indicates immutability)

            // Access a character from the string
            char ch = strPtr[1]; // Accessing the second character ('e')
            std::cout << "The character at position 1 is: " << ch << std::endl;

            // Try to modify the character through the pointer (will cause an error if uncommented)
            // strPtr[1] = 'a'; // This line would cause an error or undefined behavior

            return 0;
        }
        */
        //Question 5
        /* 


int main() {
           int nAr[3] = {1, 3}; //initializes an array of integers with 2 elements (1 and 3), leaving the third element uninitialized.
int* pn = &nAr[0];//sets pn to point to the first element of nAr.
(*pn)++;//increments the value of the first element in the array. So, nAr[0] becomes 2.
pn++;// moves the pointer to point to the next element. Now, pn points to nAr[1].

char cAr[] = {'A', 'B', 'C', 'D'};//initializes an array of characters.
char* pc = &cAr[0];// sets pc to point to the first element of cAr.
(*pc) = (*pc) + 5; // changes the value of the first element from 'A' (65 in ASCII) to 'F' (70 in ASCII).
pc = pc + 3; // moves the pointer to point to the fourth element, which is 'D'.

double dAr[3] = {1.0, 2.0}; //initializes an array of doubles.
double* pd1 = &dAr[0];// sets pd1 to point to the first element of dAr.
double* pd2 = pd1; // sets pd2 to point to the same element as pd1.
(*pd2) += 2; // adds 2 to the value pointed to by pd2 (which is the first element). So, dAr[0] becomes 3.0.
pd2 += 2; // moves the pointer to point two elements ahead. Now, pd2 points beyond the second element of dAr.

pd1 = &dAr[0]; // sets pd1 to point to the first element.
pd2 = &dAr[1]; // sets pd2 to point to the second element.
int nNumber = pd2 - pd1; // calculates the difference between the two pointers, which is 1 because pd2 points to the next element after pd1.

cout << "pd2: " << pd2 << ", pd1: " << pd1 << endl; //This will show the memory addresses that pd2 and pd1 point to, and the difference between them.
cout << "pd2 - pd1: " << nNumber << endl;


*/
        cout << "=================================================================\n\n";

        /*
Question 6

    
    // Part 4: Explicit Pointer Casting
    unsigned int nObject5 = 0x55667788; // Initialize unsigned integer with hex value
    unsigned int* pnObject5 = &nObject5; // Pointer to the unsigned integer

    // Cast to unsigned char pointer to work with individual bytes
    unsigned char* pucObject5 = reinterpret_cast<unsigned char*>(pnObject5);

    // Manipulate bytes
    char cc = *(pucObject5++); // Read first byte and move to the next
    cc = (*pucObject5)++; // Read second byte, then increment the byte
    cc = *(++pucObject5); // Move to the fourth byte and read it

    return 0;
}


*/

        cout << "=============================================================\n\n";
        /*
        Questions 7

        * void* pVoid;
int nObject3 = 5; // Initialize an integer
char cObject3 = 'A'; // Initialize a character
int* pInt = &nObject3; // Pointer to the integer

pVoid = &nObject3; // Point to the integer
pVoid = &cObject3; // Point to the character
pVoid = pInt; // Point to the integer pointer
// pInt = pVoid; // This line is incorrect. To make it correct, cast it like this:
pInt = static_cast<int*>(pVoid); // Cast void pointer to int pointer
// pInt = pVoid; // This line is incorrect. To make it correct, cast it like this:
pInt = static_cast<int*>(pVoid); // Cast void pointer to int pointer
const int n = 1; // Declare a constant integer
void* pVoidConst; // Declare a void pointer

pVoidConst = static_cast<const void*>(&n); // Correct way to assign constant integer address to void pointer
*/
        /*
Question 7a
        double dObject3 = 33.33; // Initialize a double
        pVoid = &dObject3; // Void pointer now points to the double (1)
        int nTmp = *(static_cast<int*>(pVoid)); // Cast void pointer to int pointer and dereference it (2)
        */
      //pVoid points to a double, but you are casting it to an int pointer. double(typically 8 bytes) and int(typically 4 bytes) are different sizes and representations in memory.
     //The memory layout of double is different from int. By casting, you're incorrectly interpreting the bit pattern of a double as an int, leading to unpredictable results
     //Accessing memory with an incorrect type can cause undefined behavior, leading to crashes or incorrect results
       
     /*
     * Correct Approach
        * unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&dObject3);
for (size_t i = 0; i < sizeof(double); ++i) {
    cout << "Byte " << i << ": " << static_cast<int>(bytePtr[i]) << endl;
}
*/

        cout << "==================================================================\n\n";
     /* Question 8.a
     * int value = 10;
int* const ptr = &value; // Constant pointer to int

// Accessing the value
int val = *ptr; // Ok: read the value at the address

// Changing the value at the address
*ptr = 20; // Ok: modify the value

// Modifying the pointer itself
// ptr = &anotherValue; // Error: cannot change the address the pointer is holding
 
 Question 8.a
 int value = 10;
const int* ptr = &value; // Pointer to a constant int

// Accessing the value
int val = *ptr; // Ok: read the value at the address

// Changing the value at the address
// *ptr = 20; // Error: cannot modify the value through this pointer

// Modifying the pointer itself
ptr = &anotherValue; // Ok: change the pointer to point to another address

Question 8.v
int value = 10;
const int* const ptr = &value; // Constant pointer to a constant int

// Accessing the value
int val = *ptr; // Ok: read the value at the address

// Changing the value at the address
// *ptr = 20; // Error: cannot modify the value through this pointer

// Modifying the pointer itself
// ptr = &anotherValue; // Error: cannot change the address the pointer is holding

Question 8.g
const int nN = 1;
const int* ptr = &nN; // Pointer to a const int

// Accessing the value
int val = *ptr; // Ok: read the value at the address

// Changing the value at the address
// *ptr = 2; // Error: cannot modify the value through this pointer

// Modifying the pointer itself
ptr = &anotherConstInt; // Ok: change the pointer to point to another address

*/

        cout << "==============================================================================";
        /*
        Question 9
       


int main() {
    // Step 1: Initialize an integer
    int n1 = 1;

    // Step 2: Declare pointers and initialize them
    int* pn = &n1; // Pointer to int, points to n1
    int** ppn = &pn; // Pointer to pointer to int, points to pn
    int*** pppn = &ppn; // Pointer to pointer to pointer to int, points to ppn

    // Step 3: Use the pointers to access the value of n1 and assign it to n2
    int n2 = ***pppn; // Dereference pppn to get the value of n1 and assign it to n2

    // Output the value of n2
    cout << "The value of n2 is: " << n2 << endl;

    return 0;
}
*/

}



