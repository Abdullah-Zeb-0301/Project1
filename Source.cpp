#include <iostream>
using namespace std;

int main() 
{
	int a,b,count=0;
	bool division = true,operation=true;
	int i = 1;

	cout << "Please input a number \n";

	cin >> a;

	while(operation=true)
	{
		division = true;
		for (int j = 1; j <= a && division == true; j++)
		{
			b = i % j;

			if (b == 0)
			{
				count++;
				if (count == a)
				{
					cout << i<<endl;
					system("pause");
					return 0;
				}
			}
			else
			{
				count = 0;
				division = false;
			}
		}
	   i++;
	}
	return 0;
}