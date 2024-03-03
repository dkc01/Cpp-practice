#include <iostream>

using namespace std;

int main()
{
    // Symbolic constants
    const short MIN_LENGTH = 3, MAX_LENGTH = 20;
    
    // Variable declarations
    short column;
    short length;
    short row;
    
    // Input length
    do{
        cout << "Enter the length of the line (" << MIN_LENGTH
             << " - " << MAX_LENGTH << ")" << endl;
        cin >> length;
      }while( !(length >= 3 && length <= 20 ) );
    
    // Compute
    
    // Output a square
    cout << "Now printing a square" << endl;
    for ( row = 1 ; row <= length ; row++ )
    {
        for ( column = 1 ; column <= length ;  column ++ )
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    
     // Output a square
    cout << "Now printing a right triangle" << endl;
    for ( row = 1 ; row <= length ; row++ )
    {
        for ( column = 1 ; column <= row ;  column ++ )
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Output 
   

    return 0;
}



