#include <iostream>
#include <cmath>
using namespace std;

bool isInsideSquare(double x, double y) {
    double squareTopX = 8.0;
    double squareTopY = 0.0;
    double squareBottomX = 0.0;
    double squareBottomY = 4.0;

    return (x >= squareBottomX && x <= squareTopX && y >= squareBottomY && y <= squareTopY);
}

bool isInsideCircle(double x, double y) {

    double circleCenterX = -4.0;
    double circleCenterY = 4.0;
    double circleRadius = 4.0;

    double distance = sqrt(pow(x - circleCenterX, 2) + pow(y - circleCenterY, 2));

    return (distance <= circleRadius);
}

int main() {
    double x, y;

    cout << "������ ���������� ����� (x, y): ";
    cin >> x >> y;

    if (isInsideSquare(x, y) || isInsideCircle(x, y)) {
        cout << "����� ��������� � ������������ �������." << endl;
    }
    else {
        cout << "����� �� ��������� � ������������ �������." << endl;
    }

    return 0;
}
