#include <iostream>

#include <iomanip>

#include <stdio.h>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Rus");

	char s; int n = 0;

	do {

		cout << "Введите символ:" << endl;

		cin >> s;

		if ((isalpha(s) == 0)) //проверка символа;

			cout << "Введен не символ" << endl;

	} while (isalpha(s) == 0);

	char strok[8];

	for (int i = 0; i < 7; i++)

	{

		do {

			cout << "Введите символ строки :" << endl;

			cin >> strok[i];

			if (isalpha(strok[i]) == 0) //проверка ввода строки;

			{

				cout << "Введите символ!:" << endl;

			}

		} while (isalpha(strok[i]) == 0);

	}

	strok[7] = '/0'; //конец строки;

	for (int i = 0; i < strlen(strok) - 1; i++)

	{

		if (strok[i] == s) //поиск символа;

			n = i;

	}

	if (n > 0) //если символ есть, выводится номер;

		cout << "Символ занимает" << " " << n + 1 << " " << "место в строке";

	else

		cout << "Данного символа нет в строке"; //если ссимвола нет.

	system("pause");

	return 0;

}