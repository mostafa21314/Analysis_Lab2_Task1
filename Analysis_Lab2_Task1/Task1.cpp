#include<iostream>
using namespace std;


int polynomial_1(int* arr, int size,int x, int &counter)
{
	int result = arr[0];

	for (int i = 1; i < size; i++)
	{
		int temp = 1;
		for (int j = 0; j < i; j++)
		{
			temp *= x;
		}
		result += arr[i] * temp;
	}
	return result;
}
int polynomial_2(int* arr, int size, int x, int &counter)
{
	int result = 0;
	for (int i = size-1; i >= 1; i--)
	{
		arr[i - 1] += arr[i] * x;
		
	}

	return arr[0];
}

int main()
{
	int count = 0;
	int arr[4] = { 2,3,4,5 };
	cout << polynomial_1(arr, 4, 2, count);



}