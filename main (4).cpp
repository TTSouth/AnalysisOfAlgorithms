#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    // Write your main here

    rectangleType rectangle1(10, 5);
    rectangleType rectangle2;
    
    cout << "Enter Length and width for Rectangle 2: " << endl;
    cin >> rectangle2;
    cout << endl;

    cout << "Rectangle1: ";
    rectangle1.print();
    cout << endl;

    cout << "Rectangle2: ";
    rectangle2.print();
    cout << endl;   

    cout << "Rectangle1 + rectangle2: " <<
    rectangle1 + rectangle2 << endl;

    cout << "Rectangle1 - rectangle2: " <<
    rectangle1 - rectangle2 << endl;

    cout << "Rectangle1 * rectangle2: " <<
    rectangle1 * rectangle2 << endl;

    if(rectangle1 == rectangle2)
      cout << "Rectangle1 and rectangle2 are equal." << endl;
    else
      cout << "Rectangle and rectangle2 are not equal."<< endl;

     if(rectangle1 != rectangle2)
      cout << "Rectangle1 and "
           << "rectangle2 are not equal." << endl;
     else
      cout << "Rectangle and rectangle2 are equal."<< endl;

    if(rectangle1 <= rectangle2)
      cout << "Rectangle1 is less than or equal to rectangle2." << endl;
    else
      cout << "Rectangle1 is not less than or equal to rectangle2." << endl;

    if(rectangle1 < rectangle2)
      cout << "Rectangle1 is less than to rectangle2." << endl;
    else
      cout << "Rectangle1 is not less than rectangle2." << endl;

    if(rectangle1 >= rectangle2)
      cout << "Rectangle1 is greater than or equal to rectangle2." << endl;
    else
      cout << "Rectangle1 is not less greater or equal to rectangle2." << endl;

    if(rectangle1 > rectangle2)
      cout << "Rectangle1 is greater than to rectangle2." << endl;
    else
      cout << "Rectangle1 is not greater than rectangle2." << endl;


    return 0;
}



