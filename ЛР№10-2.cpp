#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    double PriceOneEdition; 
    int NumberPublicationsMonth; 
    cout << "Введіть вартість одного номера: ";
    cin >> PriceOneEdition;
    cout << "Введіть кількість видань за місяць: ";
    cin >> NumberPublicationsMonth;
    double yearlyCost = PriceOneEdition * NumberPublicationsMonth * 12;
    cout << "Вартість річної підписки: " << yearlyCost << endl;
    return 0;
}


//інший вид запису
