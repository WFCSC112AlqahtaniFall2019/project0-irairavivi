#include <iostream>
using namespace std;

int main() {
    //cout << "Hello, World!" << endl;
    //return 0;

    // Read in the equations
    cout << "Please enter the coefficients and solution of the first equation: " << endl;
    cout << "(For example, enter the equation 8x + 7y = 38 as 8 7 38)" << endl;

    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;

    cout << "Please enter the coefficients and solution of the second equation: " << endl;

    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;

    // Use the brute force approach to find a solution if it exists
    bool sol_exists = false;

    for (int x = -10; x <= 10; x++)
    {
        for (int y = -10; y <= 10; y++)
        {
            // Check if the current x and y satisfy both equations
            if ((a1*x + b1*y == c1) && (a2*x + b2*y == c2))
            {
                cout << x << " " << y << endl;
                sol_exists = true;
            }
        }
    }

    if (sol_exists == false)
    {
        cout << "No solution" << endl;
    }

    return 0;
}