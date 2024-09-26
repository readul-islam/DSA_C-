/* 
Macros are a piece of code in a program that is given some name. Whenever the compiler encounters this name, the compiler replaces the name with the actual piece of code. The '#difine' directive is uded to define a macro.
 */


#include<iostream>
using namespace std;

// macro definition
// not semicolon need end of the macro
#define LIMIT 5

//macros define with arguments work as function
#define Area(l, b)(l*b)

int main(){
    for(int i=0;i<LIMIT; i++){
        cout << i<<" ";
    };
    cout << endl;
    cout << Area(5, 6) <<  endl;
    return 0;
}
