#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdarg.h>
#
using namespace std;

unsigned i, j;

int zd1(int memb, int dif, int n)
{
	if (n) memb = dif + zd1(memb, dif, n - 1);
	return memb;
}

int sum(int sum, int dif, int n)
{
	if (n) sum += (n*dif) + sum(sum, dif, n - 1);
	return sum;
}

int FindMax(int* arr, int arrSize, int currPos = 0)
{
	if (currPos >= arrSize)
		return 0;
	int temp = FindMax(arr, arrSize, currPos + 1);
	return(arr[temp] > arr[currPos] ? temp : currPos);
}

int zd2(int a, int b) {
	while (b) b ^= a ^= b ^= a %= b;;
	return a;
}