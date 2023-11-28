#include <iostream>
using namespace std;

int main() {
    int studentNumber;

    string names[] = { "Денис", "Максим", "Едуард", "Андрій", "Віталій", "Станіслав", "Богдан"};
    double grades[] = { 85.5, 92.0, 78.3, 89.7, 77.0, 94.2, 88.9 };

    cout << "Введіть номер студента (від 1 до 7): ";
    cin >> studentNumber;

    if (studentNumber >= 1 && studentNumber <= 7) {
        cout << "Студент: " << names[studentNumber - 1] << endl;
        cout << "Середній бал: " << grades[studentNumber - 1] << endl;
    }
    else {
        cout << "Неправильний номер студента. Введіть число від 1 до 7." << endl;
    }

    return 0;
}
