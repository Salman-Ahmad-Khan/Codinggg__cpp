#include <iostream>
using namespace std;

/*
Loops within loops are termed as nested loops.
The easiest way to understand the working of a nested loop is by solving pattern printing
problems.
*/
int main()
{
    // Print a solid rectangle

    cout << endl
         << "Input the number of rows ";
    int rows;
    cin >> rows;
    cout << "Input the number of columns ";
    int columns;
    cin >> columns;
    cout << "Solid Rectangle:" << endl
         << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}