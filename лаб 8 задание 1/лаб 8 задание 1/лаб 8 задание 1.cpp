#include <iostream>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Rus");

	int pchislo; int chislo; int petch = 10000; //для вычисления цифры

	cout << "Введите пятизначное число" << endl;

	cin >> pchislo;

	while (pchislo > 0)

	{

		chislo = pchislo / petch; //вычленение цифры;

		cout << chislo << endl; // вывод

		pchislo = pchislo - chislo * petch; // уменьшение числа на старший разряд;

		petch = petch / 10; //уменьшаем переменную для вычисления первой цифры

	}

	system("pause");

	return 0;

}