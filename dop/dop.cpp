#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int daynum;
	cout << "Введите порядковый номер дня недели(1-7) ";
	cin >> daynum;
	switch (daynum) {
		case 1:
			cout << "Понедельник";
			break;
		case 2:
			cout << "Вторник";
			break;
		case 3:
			cout << "Среда";
			break;
		case 4:
			cout << "Четверг";
			break;
		case 5:
			cout << "Пятница";
			break;
		case 6:
			cout << "Суббота";
			break;
		case 7:
			cout << "Воскресенье";
			break;
		default:
			cout << "Такого дня не существет!";
			break;
	}
}