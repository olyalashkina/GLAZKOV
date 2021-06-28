#include <iostream>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	const int l = 10;

	int m[l] = { 35,27,4,14,47,8,6,43,12,34 };

	cout << "Статический массив: " << endl; //выводим стат.массив

	for (int i = 0; i < l; i++) {

		cout << m[i] << " ";

	}

	cout << endl;

	cout << "Новый массив: " << endl;

	for (int i = 0; i < l; i++) { //заменяем чётные числа на 0.

		if (m[i] % 2 == 0)

			m[i] = 0;

	}

	for (int i = 0; i < l; i++) {

		cout << m[i] << " ";

	}

}