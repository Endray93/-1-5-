// ЛР№11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int studentNumber;
    
    string names[] = { "Денис", "Максим", "Едуард", "Андрій", "Віталій", "Станіслав", "Богдан" };
    double grades[] = { 85.5, 92.0, 78.3, 89.7, 77.0, 94.2, 88.9 };

    cout << "Введіть номер студента (від 1 до 7): ";
    cin >> studentNumber;

    switch (studentNumber) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        cout << "Студент: " << names[studentNumber - 1] << endl;
        cout << "Середній бал: " << grades[studentNumber - 1] << endl;
        break;
    default:
        cout << "Неправильний номер студента. Введіть число від 1 до 7." << endl;
        break;
    }

    return 0;
}
