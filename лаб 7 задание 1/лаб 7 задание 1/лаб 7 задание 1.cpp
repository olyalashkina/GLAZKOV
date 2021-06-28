#include <iostream>

using namespace std;

double garmonich(double aa, double bb) //расчет среднего гармонического двух чисел;

{

	double garm = 0;

	garm = 2 / ((1 / aa) + (1 / bb));

	return garm;

}

int main()

{

	setlocale(LC_ALL, "Russian");

	double a, b;

	cout << "введите два числа:" << endl;

	do {

		cin >> a >> b;

		if (a == 0 || b == 0)

			cout << "Повтори ввод";//проверка ввода;

	} while (a == 0 || b == 0); cout << endl;

	cout << "Среднее гармоническое чисел" << a << "и" << b << endl << garmonich(a, b); //вызываем функцию просчёта среднего гармонического

	system("pause");

	return 0;

}