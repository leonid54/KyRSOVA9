#pragma once
#include <iostream>
using namespace std;
#include "Hall.h"

class Phall : public Hall
{
public:
	void Price() override;
	bool set_and_check_Place(int i, int j) override;
	string set_get_movie(int i);
	string set_get_time(int i);
private:


};