//编写一个程序，用同一个函数名对n个数据进行从小到大排序，数据类型可以是整型、单精度型、双精度型。要求用重载函数实现。
//重载函数声明放到主函数外面 会报错 rank调用不明确？？？？为啥呀
#include<iostream>
using namespace std;
int main()
{
	int rank(int* a, int n);
	float rank(float* a, int n);
	double rank(double* a, int n);
	
	int n, num;
	cout << "您想输入多少个数据：" << endl;
	cin >> n;
	cout << "您输入的数据类型：1（int型） 2（float型） 3（double型）"<<endl<<"请输入编号:";
	cin >> num;
	cout << "请输入数据：";

	if (num == 1)
	{
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rank(a, n);
	}
	if (num == 2)
	{
		float* a = new float[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rank(a, n);
	}
	if (num == 3)
	{
		double* a = new double[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rank(a,n);
	}
	return 0;
}
int rank(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int t;
			if (a[i]<a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
float rank(float *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			float t;
			if (a[i] < a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	cout << "数据从小到大排列：";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
double rank(double *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			double t;
			if (a[i] < a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	cout << "数据从小到大排列:";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
	return 0;
}