#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char xB = ' ', xS = ' ';
	cout << "������� ������ ����� ������� �� ���������� ���������:";
	cin >> xB;
	cout << "������� ������ ����� ������� �� ���������� ��������:";
	cin >> xS;
	cout << "������� �������� �����:" << (int)xB - (int)xS;
}