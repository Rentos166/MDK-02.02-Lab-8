﻿// Задание 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, a, b; //объявляем переменные
	cout << "Введите размерность массива: " << endl;
	cin >> n;
	int* mass = new int[n]; // объявляем массив
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) //цикл для вывода массива
	{
		mass[i] = rand() % 99; //задаем рандомный массив
		cout << "mass[" << i << "]= " << mass[i] << endl;
	}
	cout << "Введите интервал от a: " << endl;
	cin >> a;
	cout << "Введите интервал до b: " << endl;
	cin >> b;
	cout << "Измененный массив:" << endl;
	for (int i = 0; i < n; i++) //цикл для пробега по всем числам массива
	{
		for (int j = 0; j < n; j++) //цикл для выявления принадлежит ли число данному промежутку 
		{
			if (mass[i]>=a && mass[i]<=b)
			{
				mass[i] = mass[n - 1];
				n--;
			}
		}
	}
	for (int i = 0; i < n; i++) //цикл для вывода массива
	{
		cout << "mass[" << i << "]= " << mass[i] << endl;
	}
	delete[]mass;
	system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
