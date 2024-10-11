#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	unsigned char yB = ' ', yS = ' ';
	cout << "Введите вторую букву имени на русском прописной:";
	cin >> yB;
	cout << "Введите вторую букву имени на русском строчной:";
	cin >> yS;
	cout << "Разница значений кодов:" << (int)yB - (int)yS;
}