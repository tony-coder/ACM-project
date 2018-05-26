#include <iostream>
#include <map>
#include <cmath>
using namespace std;
map <unsigned int, int> store;
//Pollard’s Rho 算法
//大整数分解质因数
//因子数=质因数的个数+1 连乘
bool is_prime(unsigned int x)  //判断素数
{
	if (x == 1)
		return false;
	else if (x == 2)
		return true;
	for (int i = 2; i <= sqrt(x*1.0); i++)
	{
		if (x%i == 0)
			return false;
	}
	return true;
}
void cal(unsigned int x)
{
	if (is_prime(x))
		store[x]++;
	else
	{
		for (int i = 2; i <= sqrt(1.0*x); i++)
		{
			if (x%i == 0)
			{
				cal(i);
				cal(x / i);
				break;
			}
		}
	}
}

int main()
{
	unsigned int n, tmp, ans;
	while (cin >> n)
	{
		cout << n << ": ";
		ans = 1;
		if (n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		store.clear();
		tmp = n;
		for (int i = 2; i <= sqrt(1.0*n); i++)
		{
			if (tmp%i == 0)
			{
				cal(i);
				cal(tmp / i);
				break;
			}
		}
		if (store.size() == 0)
		{
			cout << 2 << endl;
			continue;
		}
		map <unsigned int, int> ::iterator  iter;
		for (iter = store.begin(); iter != store.end(); iter++)
			ans *= ((iter->second) + 1);
		cout << ans << endl;
	}
	return 0;
}