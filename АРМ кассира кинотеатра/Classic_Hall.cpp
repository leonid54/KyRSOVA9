#include "Classic_Hall.h"


void Chall::Price(){cout << "Выбран классический зал!Цена за билет:200 рублей!" << endl;}

bool Chall::set_and_check_Place(int i, int j)
{
	if (m_place[i][j] == true)
	{
		return false;
	}
	else if (m_place[i][j] != true && m_place[i][j] != false)
	{
		m_place[i][j] = true;
	}
	return true;
}



string Chall::set_get_movie(int i)
{
	m_movie[0] = "1+1";
	m_movie[1] = "Паразиты";
	m_movie[2] = "Пролетая над гнездом кукушки";
	m_movie[3] = "Красавица и Чудовище";
	m_movie[4] = "Титаник";
	m_movie[5] = "Трансформеры";
	m_movie[6] = "Властелин колец";
	m_movie[7] = "Варкрафт";
	m_movie[8] = "Достучаться до небес";
	m_movie[9] = "Пила";
	return m_movie[i];
}

string Chall::set_get_time(int i)
{
	m_time[0] = "00:10 - 02:15";
	m_time[1] = "02:25 - 05:25";
	m_time[2] = "05:35 - 08:05";
	m_time[3] = "08:15 - 10:00";
	m_time[4] = "10:10 - 12:40";
	m_time[5] = "12:50 - 15:50";
	m_time[6] = "16:00 - 18:30";
	m_time[7] = "18:40 - 20:10";
	m_time[8] = "20:20 - 22:20";
	m_time[9] = "22:30 - 00:00";
	return m_time[i];
}