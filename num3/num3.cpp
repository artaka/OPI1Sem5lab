#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char z = ' ';
	cout << "Введите количество цифр имени:";
	cin >> z;
	cout << "Код символа:" << (int)z;
}