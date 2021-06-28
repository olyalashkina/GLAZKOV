#include <iostream>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	char ch;

	cout << "Введите строчную букву:" << endl;

	cin >> ch;

	ch = toupper(ch); //функция перевода регистра;

	cout << "Вывод заглавной буквы:" << endl << ch;

	cout << endl;

	system("pause");

	return 0;

}