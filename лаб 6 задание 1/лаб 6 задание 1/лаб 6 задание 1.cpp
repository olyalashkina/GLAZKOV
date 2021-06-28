#include <iostream>

using namespace std;

int max(int a, int b, int c)

{

	int m = 0;

	m = a;

	if (m < b) m = b;

	if (m < c) m = c;

	return m;

}

int main()

{

	setlocale(LC_ALL, "Ru");

	int a, b, c;

	cout << "Введите три числа:" << endl; // вводим три числа

	cin >> a >> b >> c;

	cout << "Максимальное число=" << max(a, b, c) << endl; //вызываем функцию max

	system("pause");

	return 0;

}