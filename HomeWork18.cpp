#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//������ 18.1. ������������ �������, ������� ��������� ��� ����� � ���������� �� ������� ��������������.
inline double sred_aref(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3.0;
}
//������ 18.2. ������������� ������� ��� ���������� ������������� �� ��� ���������.
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
//������ 18.3. ��������� ������� ��� ���������� ������������ �������� �������. ������� ������ �������� � ����� ����� ������.
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
	//������ 18.1. ������������ �������, ������� ��������� ��� ����� � ���������� �� ������� ��������������.
	cout << "������ 18.1.\n������� ��� �����: \n";
	double n, m, b;
	cin >> n;
	cin >> m;
	cin >> b;
	cout << "������� �������������� �����: " << n << ", " << m << " � " << b << " = " << sred_aref(n, m, b) << "\n\n";
	
	//������ 18.2. ������������� ������� ��� ���������� ������������� �� ��� ���������.
	cout << max_three(0, 15, -45) << "\n\n";
	cout << max_three (1, 7, 3) << "\n\n";//����� ���������� ��� short!!!
	cout << max_three(-1.3, 1.5, 4.2) << "\n\n";
	
	//������ 18.3. ��������� ������� ��� ���������� ������������ �������� �������. ������� ������ �������� � ����� ����� ������.
	cout << "������ 18.3.����������� ������� �������\n";
	const int size = 20;
	int arry[size];
	int A = 10, B = 75;
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arry[i] = rand() % (B + 1 - A) + A;
		cout << arry[i] << " ";
	}
	cout << "\n";
	cout << "����������� ������� ������� = " << min_mas (arry, size) << ".\n\n";
	
	return 0;
}