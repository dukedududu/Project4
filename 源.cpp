//��дһ��������ͬһ����������n�����ݽ��д�С���������������Ϳ��������͡��������͡�˫�����͡�Ҫ�������غ���ʵ�֡�
//���غ��������ŵ����������� �ᱨ�� rank���ò���ȷ��������Ϊɶѽ
#include<iostream>
using namespace std;
int main()
{
	int rank(int* a, int n);
	float rank(float* a, int n);
	double rank(double* a, int n);
	
	int n, num;
	cout << "����������ٸ����ݣ�" << endl;
	cin >> n;
	cout << "��������������ͣ�1��int�ͣ� 2��float�ͣ� 3��double�ͣ�"<<endl<<"��������:";
	cin >> num;
	cout << "���������ݣ�";

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
	cout << "���ݴ�С�������У�";
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
	cout << "���ݴ�С��������:";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
	return 0;
}