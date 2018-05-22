#include<iostream>
using namespace std;
int main() {
	int num, temp1;
	int number[2];
	int temp = 0;
	while (cin>>num)
	{
		for (int i = 0; i < num; i++)
		{
			for (int i = 0; i < 2; i++)
				cin >> number[i];
			for (int i = 0; i < 2; i++)
			{
				if (number[0]>number[1])
				{
					temp1 = number[0];
					number[0] = number[1];
					number[1] = temp1;
				}
			}
			while (temp = number[0] % number[1])
			{
				number[0] = number[1];
				number[1] = temp;
			}
			cout << "Case " << i + 1 << ": " << number[1] << endl;
		}
	}
	return 0;
}