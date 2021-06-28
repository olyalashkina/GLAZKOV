#include <iostream>

#include <string>

#include <cstring>

#include <stdio.h>

#include <string.h>

using namespace std;

string cpr(string s)

{

	string Ss;

	for (int i(0); i < s.length(); i++)

	{

		int kol = 1;

		int zp = i;

		do

		{

			if (s[zp + 1] == s[zp])

			{

				kol++;

				zp++;

			}

		} while (s[zp + 1] == s[zp]);

		Ss += "" + to_string(static_cast<int>(s[i])) + "," + to_string(kol) + " ";

		i = zp;

	}

	return Ss;

}

int main()

{

	setlocale(LC_ALL, "Russian");

	string m, n;

	cout << "Введите строку" << endl;

	getline(cin, m); // вводим строку

	n = cpr(m); //вызываем функцию сжатия

	cout << endl << n << endl;

	system("pause");

}