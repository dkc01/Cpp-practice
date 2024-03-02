/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


void display(int a, int b, int c)
{
    int* ptr;
    if(a > b && a > c)
    {
        ptr = &a;
    }
    else if(b > a && b > c)
    {
        ptr = &b;
    }
    else
    {
        ptr = &c;
    }
    
    cout << *ptr;
    
   
}

int main()
{
    int userInput1, userInput2, userInput3;
    /*
    // Practice qn 1 from codesdope
    
    
    int userInput;
    int* ptr;
    
    
    cout << "Please enter the value: ";
    cin >> userInput;
    
    ptr = &userInput;
    
    cout << ptr << endl;
    cout << *ptr << endl;
    */
    
    int* ptr;
    
    cout << "Please enter the numbers: ";
    cin >> userInput1;
    cin >> userInput2;
    cin >> userInput3;
    
    display(userInput1, userInput2, userInput3);
    
    
    return 0;
}