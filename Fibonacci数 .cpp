//有一些整数N（N≤46），输出以这些整数为序数的第n项fibonacci数。文件中的数据可能上万，但要求运行时间不超过1秒钟。
#include<iostream>
using namespace std;
int main() {
	long Fibonacci[47];
	int num;
	int k = 0;
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	while (cin>>num)
	{
		if (num<=k)
		{
			cout << Fibonacci[num] << endl;
			continue;
		}
		for (int i = 2; i <= num; i++)
		{
			Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
			k = num;
		}
		cout << Fibonacci[num] << endl;
	}
	return 0;
}