#include <iostream>
using namespace std;

int main() {
    int studentNumber;

    string names[] = { "�����", "������", "������", "�����", "³����", "��������", "������"};
    double grades[] = { 85.5, 92.0, 78.3, 89.7, 77.0, 94.2, 88.9 };

    cout << "������ ����� �������� (�� 1 �� 7): ";
    cin >> studentNumber;

    if (studentNumber >= 1 && studentNumber <= 7) {
        cout << "�������: " << names[studentNumber - 1] << endl;
        cout << "������� ���: " << grades[studentNumber - 1] << endl;
    }
    else {
        cout << "������������ ����� ��������. ������ ����� �� 1 �� 7." << endl;
    }

    return 0;
}
