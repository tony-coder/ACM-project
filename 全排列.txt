#include<iostream>
using namespace std;
void swap(int, int,int*);
int resove(int,int,int*);
int main() {
	int num;
	while (cin >> num && num >= 1 && num <= 7)
	{
		int *number = new int[num];
		for (int i = 1; i <= num; i++)
			number[i - 1] = i;
		int * pd = number;
		resove(0, num,pd);
	}
}
void swap(int n1, int n2,int * n) {
	int temp;
	temp = n[n1];
	n[n1] = n[n2];
	n[n2] = temp;	
}
int resove(int m,int num,int * pd) {
	if (m == num)
	{
		for (int i = 0; i < num; i++)
		{
			cout << pd[i];
			if (i < num - 1)
				cout << " ";
		}
		cout << endl;
		return 0;
	}
	for (int i = m; i < num; i++)
	{
		swap(m, i,pd);
		resove(m + 1, num, pd);
		swap(m, i, pd);
	}
}