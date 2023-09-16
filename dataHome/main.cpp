#include <iostream>
#include"data.h"
using namespace std;


int main()
{
	calendar a(13, 13);
	a.Output();
	calendar b(13, 13);
	b.Output();

	if (b >= a)
		cout << "Yes";
	else
		cout << "no";
}