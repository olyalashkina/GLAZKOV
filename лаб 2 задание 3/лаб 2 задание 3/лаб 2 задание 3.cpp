#include <iostream>

#include <string>

#include <cstring>

#include <stdio.h>

#include <string.h>

using namespace std;

void StrReplace(string& s, string u, string a)

{

	int I; int c = 0; int in = 0; string st;

	for (int i(0); i < s.length(); i++)

	{

		if (s[i] == u[in])

		{

			c++; in++;

			if (c == u.length())

			{

				st += a;

				c = 0;

				in = 0;

			}

		}

		else

		{

			st += s[i];

			if (c != u.length())

			{

				c = 0;

				in = 0;

			}

		}

	}

	s = st; st.clear();

}

int main()

{

	setlocale(LC_ALL, "ru");

	string m; //создаём переменные.

	string s;

	string a;

	cout << "Введите строку" << endl;

	getline(cin, m);

	cout << "Введите подстроку" << endl;

	getline(cin, s);

	cout << "Введите на что изменить" << endl; //вводим нужные данные

	getline(cin, a);

	StrReplace(m, s, a); // вызываем функцию

	cout << m << endl;

}