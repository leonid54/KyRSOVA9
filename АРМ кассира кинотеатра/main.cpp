//АРМ кассира кинотеатра
#include <iostream>
#include <string>
#include "hall.h"
#include "Premium_Hall.h"
#include "Classic_Hall.h"
using namespace std;

int enterCheckNumber(int min, int max) //Проверка и ввод числа
{
	int number = 0;
	string str;
	cin >> str;
	while (str.size() > 2)
	{
		cout << "Чиcло введено неверно!\nПопробуйте снова:";
		cin >> str;
	}

	number = stoi(str);

	while (!(number >= min && number <= max))
	{
		cout << "Чиcло введено неверно!\nПопробуйте снова:";
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
	cout << "Добро пожаловать в АРМ кассира кинотеатра!" << endl;
	cout << "Выберите тип зала(введите 1 - если выбран классический зал, 2 - если выбран премиальный зал)" << endl;
	number_of_type = enterCheckNumber(1, 2);
	while (answer != "yes")
	{
		if (number_of_type == 1)
		{
			classic->Price();
			cout << "Введите номер ряда (количество рядов = 10)" << endl;
			r = enterCheckNumber(1, 10);
			cout << "Введите номер места (количество мест в ряду = 20)" << endl;
			m = enterCheckNumber(1, 20);
			classic->set_and_check_Place(r, m);
			cout << "Выберите фильм:" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << "№" << i + 1 << " " << a.set_get_movie(i) << " " << "Продолжительность сеанса: " << a.set_get_time(i) << endl;
			}
			cin >> f;
		}
		else if (number_of_type == 2)
		{
			premium->Price();
			cout << "Введите номер ряда (количество рядов = 10)" << endl;
			r = enterCheckNumber(1, 10);
			cout << "Введите номер места (количество мест в ряду = 20)" << endl;
			m = enterCheckNumber(1, 20);
			while (!premium->set_and_check_Place(r, m))
			{
				cout << "Это место уже занято!" << endl;
				cout << "Введите номер ряда (количество рядов = 10)" << endl;
				r = enterCheckNumber(1, 10);
				cout << "Введите номер места (количество мест в ряду = 20)" << endl;
				m = enterCheckNumber(1, 20);
			}
			premium->set_and_check_Place(r, m);
			cout << "Выберите фильм:" << endl;
			for (int i = 0; i < 10; i++)
			{

				cout << "№" << i + 1 << " " << b.set_get_movie(i) << " " << "Продолжительность сеанса: " << b.set_get_time(i) << endl;
			}
			cin >> f;
		}
		cout << "Закончить оформление билета?(yes/no): " << " " << endl;
		cin >> answer;
	}


	return 0;
}