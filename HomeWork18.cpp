#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Задача 18.1. Встраиваемая функция, которая принимает три числа и возвращает их среднее арифметическое.
inline double sred_aref(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3.0;
}
//Задача 18.2. Перегруженная функция для нахождения максимального из трёх элементов.
int max_three(int num1, int num2, int num3) {
	cout << "INT\n";
	int max = num1;
	if (max <= num2)
		max = num2;
	if (max <= num3)
		max = num3;
	return max;
}
short max_three(short num1, short num2, short num3) {
	cout << "SHORT\n";
	short max = num1;
	if (max <= num2)
		max = num2;
	if (max <= num3)
		max = num3;
	return max;
}
double max_three(double num1, double num2, double num3) {
	cout << "DOUBLE\n";
	double max = num1;
	if (max <= num2)
		max = num2;
	if (max <= num3)
		max = num3;
	return max;
}
//Задача 18.3. Шаблонная функция для нахождения минимального элемента массива. Функция должна работать с любым типом данных.
template <typename T>
T min_mas(T arr[], const int length) {
	T min = arr[0];
	for (int i = 0; i < length; i++) {
		min = arr[i] < min ? arr[i] : min;		
	}	
	return min;
}





int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 18.1. Встраиваемая функция, которая принимает три числа и возвращает их среднее арифметическое.
	cout << "Задача 18.1.\nВведите три числа: \n";
	double n, m, b;
	cin >> n;
	cin >> m;
	cin >> b;
	cout << "Среднее арифметическое чисел: " << n << ", " << m << " и " << b << " = " << sred_aref(n, m, b) << "\n\n";
	
	//Задача 18.2. Перегруженная функция для нахождения максимального из трёх элементов.
	cout << max_three(0, 15, -45) << "\n\n";
	cout << max_three (1, 7, 3) << "\n\n";//нужно определить как short!!!
	cout << max_three(-1.3, 1.5, 4.2) << "\n\n";
	
	//Задача 18.3. Шаблонная функция для нахождения минимального элемента массива. Функция должна работать с любым типом данных.
	cout << "Задача 18.3.Минимальный элемент массива\n";
	const int size = 20;
	int arry[size];
	int A = 10, B = 75;
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arry[i] = rand() % (B + 1 - A) + A;
		cout << arry[i] << " ";
	}
	cout << "\n";
	cout << "Минимальный элемент массива = " << min_mas (arry, size) << ".\n\n";
	
	return 0;
}