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
	cout << "Выберите задание (1,2,3, 4 для выхода): ";
	cin >> choice;
	switch (choice) {
		case 1:
			cout << "Введите вторую букву фамилии на английском прописной:";
			cin >> xB;
			cout << "Введите вторую букву фамилии на английском строчной:";
			cin >> xS;
			if (int(xS)<127 && int(xB)<127) {
				cout << "Разница значений кодов:" << (int)xB - (int)xS;
			}
			else {
				cout << "Введенны неккорректные символы!";
			}
			break;
		case 2:
			cout << "Введите вторую букву имени на русском прописной:";
			cin >> yB;
			cout << "Введите вторую букву имени на русском строчной:";
			cin >> yS;
		
			if (192 <= int(yB) && 192 <= int(yS)) {
				cout << "Разница значений кодов:" << (int)yB - (int)yS;
			}
			else {
				cout << "Введены некорректные символы!";
			}
			break;
		case 3:
			cout << "Введите количество цифр имени:";
			cin >> z;
			if (48 <= int(z) && int(z) <= 57) {
				cout << "Код символа:" << (int)z;
			}
			else {
				cout << "Введен некорректный символ!";
			}
			break;
		case 4:
			break;
		default:
			cout << "Введенно некорректное число!";
			break;
	}
}