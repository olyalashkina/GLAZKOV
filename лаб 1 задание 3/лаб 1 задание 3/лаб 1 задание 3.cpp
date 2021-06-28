#include <iostream>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Ru");

	int m[3][3];

	cout << "Введите значения матрицы: " << endl;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			cout << "m[" << i << "][" << j << "] = ";

			cin >> m[i][j];

		}

	}

	cout << endl << "Готовый массив:" << endl;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) { //вывод матрицы

			cout << m[i][j] << " ";

		}

		cout << endl;

	}

	int d;

	d = m[0][0] * m[1][1] * m[2][2] + m[0][1] * m[1][2] * m[2][0] + m[0][2] * m[1][0] * m[2][1] - m[0][2] * m[1][1] * m[2][0] - m[0][0] * m[1][2] * m[2][1] - m[0][1] * m[1][0] * m[2][2]; //считаем определитель матрицы

	cout << endl << endl << "Определитель матрицы = " << d;

}