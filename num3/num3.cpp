#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char z = ' ';
	cout << "������� ���������� ���� �����:";
	cin >> z;
	cout << "��� �������:" << (int)z;
}