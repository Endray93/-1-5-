// ЛР№10 ІТВПД.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    int PriceOneLiterFuel = 52, ВuyerRequest; //CylindricalTank = 10000
    double Formula;
    start:
    cout << "Введіть кількість пального у літрах: " << endl;
    cin >> ВuyerRequest;
    if (ВuyerRequest >= 1) {
        Formula =  PriceOneLiterFuel * ВuyerRequest;
        cout << "Це буде коштувати: " << Formula << "грн." << endl;
    }
    else {
        cout << "Введіть позитивне число!" << endl;
        goto start;
    }
    return 0;
}