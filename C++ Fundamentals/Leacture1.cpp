/*
Header file includes the prebuilt functions and libraries which are used in the program.
iostream: is used to perform input and output operations in C++.
*/
#include <iostream>
using namespace std;
/*
namespace std: is used to avoid writing std:: before every standard function.
*/

int main() // it tell the compiler that this is the main function of the program. The execution of the program starts from here.
{ 
    /*
    cout is used to print the massage.
    << marks the start and end of the message that we want to print.
    endl, '\n' is used to insert a new line after the message is printed.
    */
    cout << "Namsate Duniya" << endl;
    cout << "Welcome to C++" << '\n';
    cout << "This is my first C++ program \n" ; // we can simply use \n within the string to insert a new line after the message is printed.
    
    /*
    Data types:
    it tells the computer what type of data we want to store.
    it also tells the size of the data.
    */
    
    /*
    variable name: is used to store the data. it is a name given to the data that we want to store.
    Rules for naming variables:
    1. The name of the variable can only contain letters, numbers and underscores.
    2. The name of the variable must start with a letter or an underscore.
    3. The name of the variable cannot be a reserved keyword.
    4. The name of the variable cannot contain spaces.
    5. Two different variables cannot have the same name, even if the data type is different.
    6. Case sensitivity: The name of the variable is case sensitive. For example, 'a' and 'A' are two different variables.
    */

    // int data type store integer values. it generally takes 4 bytes of memory.
    int a = 10;
    cout << "the value of a is: "<< a << endl;
    cout << "the size of int is: "<< sizeof(a) << endl; // sizeof() operator is used to find the size of the data type or variable in bytes.

    // char data type store single character values, it cannot store strings. it generally takes 1 byte of memory.
    char ch1 = 'U';
    cout << "the character is: "<< ch1<< '\n';
    cout << "the size of char is: "<< sizeof(ch1) << endl;

    // float data type store decimal values. it generally takes 4 bytes of memory.
    float f = 3.14;
    cout << "the value of f is: "<< f << endl;
    cout << "the size of float is: "<< sizeof(f) << endl;

    // double data type store decimal values. it generally takes 8 bytes of memory.
    double d = 3.14159265358979323846;
    cout << "the value of d is: "<< d << endl;  
    cout << "the size of double is: "<< sizeof(d) << endl;

    // bool data type store boolean values. it generally takes 1 byte of memory. it can store only two values, true or false.
    bool isTrue = true;
    cout << "the value of isTrue is: "<< isTrue << endl; 
    bool isFalse = false;
    cout << "the value of isFalse is: "<< isFalse << endl;  
    bool isGreater = (3>2);
    cout << "the value of (3>2) is: "<< isGreater << endl;
    cout << "the size of bool is: "<< sizeof(isGreater) << endl;

    /*
    Type casting: is used to convert one data type to another data type. It can be done in two ways:
    1. Implicit type casting: is done automatically by the compiler when we assign a
    value of one data type to a variable of another data type. It is also called type conversion.
    2. Explicit type casting: is done manually by the programmer using the cast operator.
    */

    // Implicit type casting
    int u = 'a'; // Implicit type casting
    cout << "The value of u is: " << u << endl;

    char c = 123456; // Implicit type casting
    cout << "the value of c(out of range) is: "<< c << endl;

    unsigned int ui = -10; // Implicit type casting. Here the negative value is treated as a large positive value because unsigned int can only store positive values.
    cout << "the value of ui is: "<< ui << endl;


    /*
    Operators: are used to perform operations on variables and values. There are different types of operators in C++:
    1. Arithmetic operators: are used to perform arithmetic operations on variables and values.
    2. Relational operators: are used to compare two values and return a boolean value.
    3. Logical operators: are used to perform logical operations on variables and values.
    4. Assignment operators: are used to assign values to variables.
    5. Bitwise operators: are used to perform bitwise operations on variables and values.
    6. Ternary operator: is used to perform a conditional operation on variables and values. It is also called conditional operator.
    7. Increment and Decrement operators: are used to increase or decrease the value of a variable by 1.
    8. Comma operator: is used to separate two or more expressions. It is also called sequence operator.
    9. sizeof() operator: is used to find the size of the data type or variable in bytes.
    */
    // Explicit type casting
    int x = 10;
    int y = 3;
    float div = (float)x / y; // Explicit type casting 
    cout << "the value of div(Explicit type casting) is: "<< div << endl;  


    return 0; // it tells the compiler that the program has ended successfully.
}