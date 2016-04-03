// sscans.cpp : election problem
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, temp;
	float sum = 0, pop = 0, per;

	cin >> n;
	int *arr = new int[n]; 

	// array initailised dynamically so any no. of states can be entered
	
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
		pop = pop + arr[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n-i-1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	if (n % 2 == 0)
		temp = n / 2;
	else
		temp = (n / 2) + 1;

	for (size_t i = 0; i < temp; i++)
	{
		sum = sum + arr[i];
	}
	
	sum = sum / 2;

	per = (sum / pop) * 100;
	printf("%.2f", per);
	return 0;
}

