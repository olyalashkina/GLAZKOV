#include <iostream>

using namespace std;

void pr(int& pr1, int& pr2) {

	int pr3;

	cout << "Введи входящее число" << endl;

	cin >> pr3;

	while (true) {

		if (pr1 < pr3 && pr3 < pr2) {

			cout << "Число входит в интервал" << endl;

			break;

		}

		else

		{

			int k = 0; //для варианта меню

			while (k != 4) {

				cout << "Выберете один из вариантов" << endl;

				cout << "1 Ввод верхнего предела " << endl;

				cout << "2 Ввод нижнего предела " << endl;

				cout << "3 Изменить входящее число " << endl;

				cout << "4 Продолжить проверку " << endl;

				cin >> k;

				switch (k) {

				case(1):

					cout << "Изменить верхний предел на - ";

					cin >> pr1;

					cout << endl;

					break;

				case(2):

					cout << "Изменить нижний предел на - ";

					cin >> pr2;

					cout << endl;

					break;

				case(3):

					cout << "Изменить входящее число на - ";

					cin >> pr3;

					cout << endl;

					break;

				}

				if (k == 4) break;

			}

		}

	}

}

int main()

{

	setlocale(LC_ALL, "Russian");

	int x, y;

	cout << "Введите нижни предел" << endl;

	cin >> x;

	cout << "Введите верхний предел" << endl;

	cin >> y;

	pr(x, y);

}