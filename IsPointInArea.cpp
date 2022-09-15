/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInCircle(double x, double y, double xC, double yC, double r) {
    return (sqrt(pow(x - xC, 2) + pow(y - yC, 2))) <= r;
}

bool IsPointOutOfCircle(double x, double y, double xC, double yC, double r) {
    return (sqrt(pow(x - xC, 2) + pow(y - yC, 2))) >= r;
}

bool IsPointAboveLine(double x, double y, double k, double b) {
    return y >= k * x + b;
}

bool IsPointUnderLine(double x, double y, double k, double b) {
    return y <= k * x + b;
}

bool IsPointInArea(double x, double y, double xC, double yC, double r,
                    double k1, double b1, double k2, double b2) {
    return ((IsPointAboveLine(x, y, k1, b1) && IsPointAboveLine(x, y, k2, b2) && IsPointInCircle(x, y, xC, yC, r))
    || (IsPointUnderLine(x, y, k1, b1) && IsPointUnderLine(x, y, k2, b2) && IsPointOutOfCircle(x, y, xC, yC, r)));
}

int main()
{
  
    double b1 = 0, b2 = 2, x, y, xC = -1, yC = 1, r = 2, k1 = -1, k2 = 2;
  
    cin >> x >> y;
  
    cout << ((IsPointInArea(x, y, xC, yC, r, k1, b1, k2, b2)) ? "YES" : "NO") << endl;
  
    return 0;
}
