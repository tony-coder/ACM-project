#include<iostream>
void dfs(int, int);
using namespace std;
int a[7];
int main() {
	int num;
	while (cin >> num && num <= 7 && num >= 1)
	{
		dfs(0, num);
	}
	return 0;
}
void dfs(int cur, int n) //cur表示正在填的数，n表示总共要填的数
{
	if (cur == n)//递归边界，说明填完了 
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
			if (i < n - 1)
				cout << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++)//把数字1-n填入 
	{
		int decide = 1;
		for (int j = 0; j < cur; j++)//遍历目前a数组里面的元素，判断当前这个数有没有填过（用过） 
		{
			if (a[j] == i)
				decide = 0;
		}
		if (decide==1)
		{
			a[cur] = i;//没有填过就填 ，把它放在a数组的最后 
			dfs(cur + 1, n);//再排A数组元素里面的第cur+1个位置 （这里就不需要设置撤销的动作了～反正每次进来都会判断数字有没有填过） 
		}
	}
}