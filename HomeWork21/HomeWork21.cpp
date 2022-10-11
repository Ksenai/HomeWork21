//Домашнее задание №21
#include <iostream>


int main() {
	setlocale(LC_ALL, "ru");
	 
	//Задание
	double x, y;
	std::cout << "Введите два числа: ";
	std::cin >> x >> y;
	double* px = &x;
	double* py = &y;

	//Задача
	double xy = (*px + *py) / 2;
	std::cout << "Среднее арифметическое = " << xy << std::endl;

	return 0;
}