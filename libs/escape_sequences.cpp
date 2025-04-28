#include <iostream>

using namespace std; // use this package to avoid using std:: prefix and go just for the calls

int main(){

    // This is a comment

    /*
        This
        is
        a
        multiline
        comment
    */
    
    //  :: = The scope resolution operator helps to identify and specify the context to which an identifier refers, particularly by specifying a namespace or class.


    // use this to print
    std::cout << "Hello World";
    cout << "Hello World";


    // add << std::endl to add a new line
    std::cout << "Hello World" << std::endl;
    cout << "Hello World" << endl;


    // or use << '\n' to add a new line
    std::cout << "Hello World" << '\n';
    cout << "Hello World" << '\n';


    ///////////////////////////

    /*
        #include <iostream>       
            *Searches for the header file in standard library directories.
            *Use this for including headers that are part of the C++ standard library or system-specific libraries.
        
        #include "header.cpp"
            *Searches for the header file within the current project's include directories.
            *Use this for including your own custom header files or headers from other parts of your project.
    */


   /*
        #define
            *Defines a macro that can be used throughout the code.
            #define MACRO_NAME value    (Uppercase convention is common)
            #define DEBUG               (Simply defines a macro named DEBUG (no value))
            #define PI 3.14159          (Assigns the value 3.14159 to the macro PI)


        #undef
            *Undefines the macro previously assigned.
            #undef DEBUG                (DEBUG is no longer available after this point)


        #ifdef
            *Checks if a macro has been previously defined with #define
            #ifdef MACRO_NAME
            If MACRO_NAME is defined, the code block following #ifdef is included for compilation.
            If MACRO_NAME is NOT defined, the code block is skipped. 

            #ifdef DEBUG
                cout << "Debug message" << endl;
            #endif


        #ifndef
            *The opposite of #ifdef
            #ifndef MACRO_NAME
            If MACRO_NAME is NOT defined, the code block following #ifndef is included for compilation.
            If MACRO_NAME is defined, the code block is skipped.

        
        #else
            *Used with #ifdef or #ifndef to provide alternative code if the initial condition is not met.

        
        #elif (else if)
            *Used with #ifdef, #ifndef, or other #elif directives for multiple conditional checks.

            #ifdef FEATURE_A
                // Code for feature A
            #elif FEATURE_B
                // Code for feature B
            #else
                // No features enabled
            #endif


        #endif
            *Marks the end of a conditional compilation block started by #ifdef, #ifndef, #elif, or #else.
   */

    return 0;
}