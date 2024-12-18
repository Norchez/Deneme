#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	char decision; 
	int sayac = 0;
	const int MAX = 1000;
	const char b = 'Y';
	const char c = 'N';

	int numbers[MAX];
	int sonuc[6] = { 0 };

	while (true)
	{
		cout << "Do you want to roll dice (Y/N) ? : ";
		cin >> decision;
		cout << endl;

		while (true)
		{
			if (decision == b)
			{
				break;
			}
			else if (decision == c)
			{
				cout << "Goodbye..." << endl;
				for (int j = 0;j < sayac;j++)
				{
					if (numbers[j] == 1)
					{
						sonuc[0]++;
					}
					else if (numbers[j] == 2)
					{
						sonuc[1]++;
					}
					else if (numbers[j] == 3)
					{
						sonuc[2]++;
					}
					else if (numbers[j] == 4)
					{
						sonuc[3]++;
					}
					else if (numbers[j] == 5)
					{
						sonuc[4]++;
					}
					else
					{
						sonuc[5]++;
					}
				}
				for (int z = 1;z < 7;z++)
				{
					cout << "The number " << z << " exists " << sonuc[z - 1] << " times. " << endl;
				}
				
				return 0;
			}
			else
			{
				cout << "Please choose (Y/N) !!!" << endl;
				cout << "Do you want to roll dice (Y/N) ? : ";
				cin >> decision;
				cout << endl;
			}
		}
		numbers[sayac] = rand() % 6 + 1;
		cout << numbers[sayac] << " is your number..." << endl;
		sayac++;
	}

}
