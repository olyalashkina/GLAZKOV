#include <iostream>

#include <stdio.h>

#include <time.h>

#include <cstdlib>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	const int m = 10;

	int a[m]; //создаём стат.мас.

	int t, j;

	cout << "Исходный массив:" << endl;

	srand(time(0));

	for (int i = 0; i < m; i++)

	{

		a[i] = rand() % 100; //заполнение массива случайными числами;

		cout << a[i] << " ";

	}

	cout << endl;

	for (int i = 1; i < m; i++)

	{

		t = a[i]; //вспомогательная переменная для сортировки;

		j = i - 1;

		while (t < a[j] && j >= 0) //сортировка по возрастанию. Каждый элемент сравнивается со всеми предыдущими и занимает нужную позицию;

		{

			a[j + 1] = a[j];

			j--;

		}

		a[j + 1] = t;

	}

	cout << "Вывод отсортированного статического массива:" << endl;

	for (int i = 0; i < m; i++)

	{

		cout << i << a[i] << " ";

	}

	system("pause");

	return 0;

}