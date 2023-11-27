// ЛР№10-3.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {

    setlocale(LC_ALL, "Ukrainian");

    Point A = { 0, 0 };
    Point B = { 20, 19 };
    Point C = { -20, 21 };

    double sideAB = distance(A, B);
    double sideBC = distance(B, C);
    double sideCA = distance(C, A);

    double medianCS = sqrt(2 * pow(sideAB, 2) + 2 * pow(sideBC, 2) - pow(sideCA, 2)) / 2;
    double radiusR = (sideAB * sideBC * sideCA) / (4 * sqrt((sideAB + sideBC + sideCA) * (-sideAB + sideBC + sideCA) * (sideAB - sideBC + sideCA) * (sideAB + sideBC - sideCA)));

    cout << "Медіана mС трикутника: " << medianCS << endl;
    cout << "Радіус описаного кола R трикутника: " << radiusR << endl;

    return 0;
}
