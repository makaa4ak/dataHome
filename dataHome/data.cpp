#include "data.h"
#include <iostream>

using namespace std;

calendar::calendar()
{

	Data = 0;
	Mounth = 0;

}
calendar::calendar(int d, int m)
{
	Data = d;
	Mounth = m;
}

int calendar::GetData()
{
	return 0;
}
int calendar::GetMounth()
{
	return 0;
}

void calendar::SetData(int set)
{
	Data = set;
}
void calendar::SetMounth(int set)
{
	Mounth = set;
}

void calendar::Input()
{
	cout << "Data: ";
	cin >> Data;
	cout << "Mounth: ";
	cin >> Mounth;
	Chek();
}
void calendar::Output()
{
	Chek();
	cout << "\n--------------------\n";
	cout << "Data: " << Data << "\nMounth: " << Mounth;
	cout << "\n--------------------\n";
}

calendar& calendar::operator++()
{
	Data += 1;
	return *this;
}
calendar& calendar::operator--()
{
	Data -= 1;
	return *this;
}

calendar calendar::operator+(int num)
{
	return calendar(this->Data + num, Mounth + 0);
}
calendar calendar::operator-(int num)
{
	bool bol = true;
	while (bol)
	{
		if (num >= Data)
		{
			Data += 30;
			Mounth--;
		}
		else
			bol = false;
	}
	return calendar(this->Data - num, this->Mounth + 0);
}

calendar calendar::operator-(calendar dat)
{
	calendar rez;
	bool bol = true;
	while (bol)
	{
		if (dat.Data >= Data)
		{
			Data += 30;
			Mounth--;
		}
		else
			bol = false;
	}
	rez.Data = this->Data - dat.Data;
	rez.Mounth = this->Mounth - dat.Mounth;
	return rez;
}

calendar calendar::operator+=(int d)
{
	Data += d;
	return calendar();
}
calendar calendar::operator-=(int d)
{
	bool bol = true;
	while (bol)
	{
		if (d >= Data)
		{
			Data += 30;
			Mounth--;
		}
		else
			bol = false;
	}
	Data -= d;
	return calendar();
}

bool calendar::operator>(calendar& b)
{
	if (draw() > b.draw())
		return true;
	else
		return false;
}

bool calendar::operator<(calendar& b)
{
	if (draw() < b.draw())
		return true;
	else
		return false;
}

bool calendar::operator>=(calendar& b)
{
	if (draw() >= b.draw())
		return true;
	else
		return false;
}

bool calendar::operator<=(calendar& b)
{
	if (draw() <= b.draw())
		return true;
	else
		return false;
}
