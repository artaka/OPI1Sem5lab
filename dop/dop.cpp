#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int daynum;
	cout << "������� ���������� ����� ��� ������(1-7) ";
	cin >> daynum;
	switch (daynum) {
		case 1:
			cout << "�����������";
			break;
		case 2:
			cout << "�������";
			break;
		case 3:
			cout << "�����";
			break;
		case 4:
			cout << "�������";
			break;
		case 5:
			cout << "�������";
			break;
		case 6:
			cout << "�������";
			break;
		case 7:
			cout << "�����������";
			break;
		default:
			cout << "������ ��� �� ���������!";
			break;
	}
}