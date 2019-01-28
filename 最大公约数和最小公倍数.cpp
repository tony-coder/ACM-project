#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	int Greatest_common_divisor, Least_common_multiple;
	while (cin >> num1 >> num2 && num1 != 0 && num2 != 0)
	{
		int temp;
		int temp1 = num1;
		int temp2 = num2;
		if (temp1 < temp2)
		{
			temp = temp1;
			temp1 = temp2;
			temp2 = temp;
		}
		while (temp = temp1 % temp2)//求最大公约数
		{
			temp1 = temp2;
			temp2 = temp;
		}
		Greatest_common_divisor = temp2;
		Least_common_multiple = num1 * num2 / Greatest_common_divisor;//求最小公倍数

		cout << Greatest_common_divisor + Least_common_multiple << endl;
	}
	return 0;
}