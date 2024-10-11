#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char xB = ' ', xS = ' ';
	cout << "¬ведите вторую букву фамилии на английском прописной:";
	cin >> xB;
	cout << "¬ведите вторую букву фамилии на английском строчной:";
	cin >> xS;
	cout << "–азница значений кодов:" << (int)xB - (int)xS;
}