#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	unsigned char yB = ' ', yS = ' ';
	cout << "������� ������ ����� ����� �� ������� ���������:";
	cin >> yB;
	cout << "������� ������ ����� ����� �� ������� ��������:";
	cin >> yS;
	cout << "������� �������� �����:" << (int)yB - (int)yS;
}