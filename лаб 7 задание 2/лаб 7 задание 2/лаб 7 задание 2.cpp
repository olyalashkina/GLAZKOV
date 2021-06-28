#include <cmath>

#include <iostream>

using namespace std;

void sort(double* aa, double* bb, double* cc) { // принимает адреса чисел и сортирует их.

	double a1 = *aa, a2 = *bb, a3 = *cc;

	if (a1 < a2) {

		if (a1 < a3) {

			if (a2 < a3) {

				*aa = a1;

				*bb = a2;

				*cc = a3;

			}

			else

			{

				*aa = a1;

				*bb = a3;

				*cc = a2;

			}

		}

		else

		{

			*aa = a3;

			*bb = a1;

			*cc = a2;

		}

	}

	else

	{

		if (a2 < a3) {

			if (a1 > a3) {

				*aa = a2;

				*bb = a3;

				*cc = a1;

			}

			else {

				*aa = a2;

				*bb = a1;

				*cc = a3;

			}

		}

		else {

			*aa = a3;

			*bb = a2;

			*cc = a1;

		}

	}

}

int main()

{

	setlocale(LC_ALL, "ru");

	double a, b, c;

	cout << "Введите три числа" << endl;

	cout << "Введите первое число - " << endl;

	cin >> a;

	cout << "Введите второе число - " << endl;

	cin >> b;

	cout << "Введите третье число - " << endl;

	cin >> c;

	sort(&a, &b, &c);

	cout << "Отсортированные числа " << endl;

	cout << "1 число - " << a << endl;

	cout << "2 число - " << b << endl;

	cout << "3 число - " << c << endl;

	system("pause");

	return 0;

}