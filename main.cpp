#include <iostream> 
using namespace std;

int main() {
	// ��������� ������������� ���������� 'a' ��� �������� ���������� ��������
	int a;

	// ����������� � ������������ ������ �������� ��� 'a'
	cout << "Enter value a : ";

	// ������ ��������� ������������� �������� � ��������� ��� � 'a'
	cin >> a;

	// ��������� ��������� ��������� 5 �� 'a' � ��������� ��� � 'res'
	int res = a - 5;

	// ������� ��������� ����������
	cout << "a-5: " << res;

	// ���������� 0 ��� �������� ��������� ���������� ���������
	return 0;
}
