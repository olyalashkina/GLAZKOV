#include <iostream>

using namespace std;

const int N = 5;

int avg(int a[N]) //поиск среднего арифметического в массиве

{

	int s = 0, aV = 0;

	for (int i = 0; i < N; i++)

	{

		s = s + a[i];

	}

	aV = s / N;

	return aV;

}

int main()

{

	setlocale(LC_ALL, "Russian");

	int b[N] = { 264,314,267,125,864 };

	cout << "Среднее арифметическое массива=" << avg(b) << endl;

	system("pause");

	return 0;

}