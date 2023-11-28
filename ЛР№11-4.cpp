// ЛР№11-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int k) {
    int result = 1;
    for (int i = 1; i <= k; ++i) {
        result *= i;
    }
    return result;
}

double calculateSum(double e) {
    double sum = 0.0;
    double term = 1.0;
    int i = 1;
    while (abs(term) >= e) {
        sum += term;
        ++i;
        term = 1.0 / (i * i);
    }
    return sum;
}

void primeDivisors(int g) {
    cout << "Прості дільники числа " << g << ": ";
    for (int i = 2; i <= g; ++i) {
        while (g % i == 0) {
            cout << i << " ";
            g /= i;
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int choice;

    cout << "Виберіть номер задачі для виконання:\n";
    cout << "1. Обчислити факторіал числа k.\n";
    cout << "2. Обчислити суму ∑(1 / i^2) досягаючи заданої точності.\n";
    cout << "3. Отримати прості дільники числа g.\n";
    cin >> choice;

    switch (choice) {
    case 1:
        int k;
        cout << "Введіть число k для обчислення факторіалу: ";
        cin >> k;
        cout << "Факторіал " << k << " = " << factorial(k) << endl;
        break;
    case 2:
        double e;
        cout << "Введіть похибку e: ";
        cin >> e;
        cout << "Отримане наближене значення суми: " << calculateSum(e) << endl;
        break;
    case 3:
        int g;
        cout << "Введіть число g для знаходження простих дільників: ";
        cin >> g;
        primeDivisors(g);
        break;
    default:
        cout << "Невірний вибір." << endl;
        break;
    }

    return 0;
}
