#include <iostream>
#include <cmath> // ����������� ��������

using namespace std;

int main()
{
	double x; // ������� ��������                                                             
	double z1; // ��������� ���������� 1-�� ������                                                           	
	double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x; // ������ ������ �������� x
	z1 = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x)); // ������� ���������� 1-�� ������
	// z2 = (1 - tan(x)) / (1 + tan(x)); // ������� ����������� 2-�� ������
	cout << "z1 = " << z1 << endl; // ���� ���������� ���������� 1-�� ������
	// cout << "z2 = " << z2 << endl; // ���� ���������� ���������� 2-�� ������

	return 0;
}