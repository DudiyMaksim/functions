#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int step(int a, int b)
{
	int a1 = a;
	for (size_t i = 0; i < b-1; i++)
	{
		a *= a1;
	}
	return a;
}

int sum_of_d(int start, int finish)
{
	int sum = 0;
	for (int i = start; i < finish; i++)
	{
		sum += i;
	}
	return sum;
}

int perf(int b, int inter)
{
	for (int i = b+1;i<10000; i=i+ inter)
	{
		int sum1 = 0;
		for (int j = 1; j < i; j++)
		{
			if (i%j==0)
			{
				sum1 += j;
			}
		}
		if (sum1 == i)
		{
			return i;
		}
	}
}

bool happy_v(int v)
{
	return  (v / 100000 + v / 10000 % 10 + v / 1000 % 100 % 10)==(v / 100 % 10 + v % 100 / 10 + v % 10);
}

int find_ind(int a[], int size, int x)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i]==x)
		{
			return i;
		}
	}
}

int binarry_s(int a[], int size,int x)
{
	int start=0, end = size-1;
	int mid;
	while (start<=end)
	{
		mid = (start + end) / 2;
		if (x > a[mid])
		{
			start = mid+1;
		}
		else if (x < a[mid])
		{
			end = mid-1;
		}
		else
		{
			return mid;
		}
	}
}

void wtnm(int number)
{
	int now = number % 10, i = 2, x, y, trnumber = 0, n=2;
	trnumber += now == 1 ? 1 : 0;
	int b=10;
	while (true)
	{
		x = pow(10, i - 1);
		y = pow(10, i - 2);
		n = pow(2, i - 1);
		now = number / 10 % x / y;
		i += 1;
		trnumber += now == 1 ? n : 0;
		if (number < x) {
			break;
		}
		b *= 10;
	}
	cout <<  trnumber;
}

int main()
{
	///*task1 1.1*/
	//cout << step(2, 3);
	///*task 1.2*/
	//cout << sum_of_d(1,4);
	///*task 1.3*/
	//int interv, c;
	//cout << "Enter interval : ";
	//cin >> interv;
	//cout << perf(1, interv) << endl;
	//c = perf(perf(1, interv), interv);
	//int x = 0;
	//while (x < 2)
	//{
	//	cout << perf(c, interv) << endl;
	//	c = perf(c, interv);
	//	x += 1;
	//}
	/*task 1.4!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
	///*task 1.5*/
	//int a;
	//cin >> a;
	//cout << happy_v(a);
	/*task 2.1*/
	/*int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "Index of x : " << find_ind(arr, 10, 5);*/
	///*task 2.2*/
	//int arr[10]{ 3,7,12,32,47,60,75,80,92,99 }, q;
	//cout << "Enter x :";
	//cin >> q;
	//cout << "Index of x : " << binarry_s(arr, 10, q);
	///*task 2.3*/
	//wtnm(1110);
}
