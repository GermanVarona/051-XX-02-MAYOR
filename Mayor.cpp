/* TP#2 Mayor
German O Varona
K1051
20170404
*/

#include "stdafx.h"
#include <iostream>
#include<conio.h>

int main()
{
	int a, b;
	std::cin >> a;
	std::cin >> b;
	if (a > b)
	{
		std::cout << a;
	}
	else
	{
		std::cout << b;
	};
	getch();
	return 0;
}