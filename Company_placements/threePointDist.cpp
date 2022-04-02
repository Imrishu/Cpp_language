/*

Instructions: You are required to write the code. You can click on compile & run anytime
to check the compilation/ execution status of the program. The submitted code should be
logically/syntactically correct and pass all the test cases.

Ques: The program is supposed to calculate the distance between three points.

For
x1 = 1 y1 = 1
x2 = 2 y2 = 4
x3 = 3 y3 = 6

Distance is calculated as : sqrt(x2-x1)2 + (y2-y1)2

*/

#include <bits/stdc++.h>
using namespace std;

int threePointDist(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int distance1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    int distance2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    int distance3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    return distance1 + distance2 + distance3;
}

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << threePointDist(x1, y1, x2, y2, x3, y3);
    return 0;
}