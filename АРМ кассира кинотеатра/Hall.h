#pragma once
#include <iostream>
using namespace std;

class Hall
{
public:
	virtual void Price() = 0;
	virtual bool set_and_check_Place(int i,int j)=0;
protected:
	int m_place[10][20];
	string m_movie[10];
	string m_time[24];
};