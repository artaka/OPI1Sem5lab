#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	int choice;
	unsigned char xB = ' ', xS = ' ';
	unsigned char yB = ' ', yS = ' ';
	unsigned char z = ' ';
	cout << "�������� ������� (1,2,3, 4 ��� ������): ";
	cin >> choice;
	switch (choice) {
		case 1:
			cout << "������� ������ ����� ������� �� ���������� ���������:";
			cin >> xB;
			cout << "������� ������ ����� ������� �� ���������� ��������:";
			cin >> xS;
			if (int(xS)<127 && int(xB)<127) {
				cout << "������� �������� �����:" << (int)xB - (int)xS;
			}
			else {
				cout << "�������� ������������� �������!";
			}
			break;
		case 2:
			cout << "������� ������ ����� ����� �� ������� ���������:";
			cin >> yB;
			cout << "������� ������ ����� ����� �� ������� ��������:";
			cin >> yS;
		
			if (192 <= int(yB) && 192 <= int(yS)) {
				cout << "������� �������� �����:" << (int)yB - (int)yS;
			}
			else {
				cout << "������� ������������ �������!";
			}
			break;
		case 3:
			cout << "������� ���������� ���� �����:";
			cin >> z;
			if (48 <= int(z) && int(z) <= 57) {
				cout << "��� �������:" << (int)z;
			}
			else {
				cout << "������ ������������ ������!";
			}
			break;
		case 4:
			break;
		default:
			cout << "�������� ������������ �����!";
			break;
	}
}