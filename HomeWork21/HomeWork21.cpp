//�������� ������� �21
#include <iostream>


int main() {
	setlocale(LC_ALL, "ru");
	 
	//�������
	double x, y;
	std::cout << "������� ��� �����: ";
	std::cin >> x >> y;
	double* px = &x;
	double* py = &y;

	//������
	double xy = (*px + *py) / 2;
	std::cout << "������� �������������� = " << xy << std::endl;

	return 0;
}