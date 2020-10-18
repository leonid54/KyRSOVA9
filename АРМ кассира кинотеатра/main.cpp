//��� ������� ����������
#include <iostream>
#include <string>
#include "hall.h"
#include "Premium_Hall.h"
#include "Classic_Hall.h"
using namespace std;

int enterCheckNumber(int min, int max) //�������� � ���� �����
{
	int number = 0;
	string str;
	cin >> str;
	while (str.size() > 2)
	{
		cout << "��c�� ������� �������!\n���������� �����:";
		cin >> str;
	}

	number = stoi(str);

	while (!(number >= min && number <= max))
	{
		cout << "��c�� ������� �������!\n���������� �����:";
		cin >> number;
	}

	return number;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int number_of_type,r, m,f;
	string answer;
	Chall a;
	Phall b;
	Hall *classic = &a;
	Hall* premium = &b;
	cout << "����� ���������� � ��� ������� ����������!" << endl;
	cout << "�������� ��� ����(������� 1 - ���� ������ ������������ ���, 2 - ���� ������ ����������� ���)" << endl;
	number_of_type = enterCheckNumber(1, 2);
	while (answer != "yes")
	{
		if (number_of_type == 1)
		{
			classic->Price();
			cout << "������� ����� ���� (���������� ����� = 10)" << endl;
			r = enterCheckNumber(1, 10);
			cout << "������� ����� ����� (���������� ���� � ���� = 20)" << endl;
			m = enterCheckNumber(1, 20);
			classic->set_and_check_Place(r, m);
			cout << "�������� �����:" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << "�" << i + 1 << " " << a.set_get_movie(i) << " " << "����������������� ������: " << a.set_get_time(i) << endl;
			}
			cin >> f;
		}
		else if (number_of_type == 2)
		{
			premium->Price();
			cout << "������� ����� ���� (���������� ����� = 10)" << endl;
			r = enterCheckNumber(1, 10);
			cout << "������� ����� ����� (���������� ���� � ���� = 20)" << endl;
			m = enterCheckNumber(1, 20);
			while (!premium->set_and_check_Place(r, m))
			{
				cout << "��� ����� ��� ������!" << endl;
				cout << "������� ����� ���� (���������� ����� = 10)" << endl;
				r = enterCheckNumber(1, 10);
				cout << "������� ����� ����� (���������� ���� � ���� = 20)" << endl;
				m = enterCheckNumber(1, 20);
			}
			premium->set_and_check_Place(r, m);
			cout << "�������� �����:" << endl;
			for (int i = 0; i < 10; i++)
			{

				cout << "�" << i + 1 << " " << b.set_get_movie(i) << " " << "����������������� ������: " << b.set_get_time(i) << endl;
			}
			cin >> f;
		}
		cout << "��������� ���������� ������?(yes/no): " << " " << endl;
		cin >> answer;
	}


	return 0;
}