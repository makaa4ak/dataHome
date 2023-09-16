#pragma once
class calendar
{
private:
	int Data;
	int Mounth;
	int troll;
	void Chek()
	{
		bool t = true;
		while (t)
		{
			if (Data >= 31)
			{
				Mounth++;
				Data -= 30;
			}
			else
				t = false;
		}
	}
	int draw() 
	{
		int Dan = Data;
		int Moun = Mounth;
		for (int i = 0; i < Moun; i++)
		{
			Dan += 30;
		}
		return Dan;
	}
public:
	calendar();
	calendar(int, int);

	int GetData();
	int GetMounth();

	void SetData(int);
	void SetMounth(int);

	void Input();
	void Output();


	calendar& operator ++();
	calendar& operator --();

	calendar operator+(int);
	calendar operator-(int);
	calendar operator-(calendar dat);

	calendar operator+=(int);
	calendar operator-=(int);


	bool operator>(calendar& b);
	bool operator<(calendar& b);
	bool operator>=(calendar& b);
	bool operator<=(calendar& b);



};