#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "vizov.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "Vedite zd =  ";
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*���� ������ ���� � ����������� �������������� ����������. �������� ����������� �������: 
              a.	���������� n-�� ����� ����������
              b.	���������� ����� n ������ ������ ���������� */
		int N = 3;
		int differ = 7;
		int first = 1;
		cout <<"Perviy chlen "<< zd1(first, differ, N - 1) << endl;
		cout << "Summa "<<sum(first, differ, N - 1) << endl;

		}
		else if (nz == 2)
		{
			/*�������� ����������� �������
			��� ���������� ������������� �������� ������� �� n ���������*/
			int arr[] = { 6, 7, 3, 4, -16, 2 };
			cout << "Findmax = "<<FindMax(arr, sizeof(arr) / sizeof(int));
			
		}
		else if (nz == 3)
		{
			/*�������� ����������� ������� ��� ���������� 
			������� ������������� �������� ������� �� n ���������*/
			int arr[] = { 6, 7, 3, 4, -16, 2 };
			cout << "Findmax = "<<FindMax(arr, sizeof(arr) / sizeof(int));
		}
		else if (nz == 4)
		{
			/*��� ������ ����� ����� A. ����� �����
			������������� � ������������� ��������� �������, ��������� ������� ����������� �����*/
			const int n = 10, m = 20;
			int X[n], Y[m], sum = 0, count = 0;

			for (int i = 0; i < n; i++) {
				X[i] = rand() % 100 - 50;
				cout << X[i] << " ";
				if (X[i] > 0) {
					sum += X[i];
				}
			}
			cout << "\n \n";

			for (int j = 0; j < m; j++) {
				Y[j] = rand() % 100 - 50;
				cout << Y[j] << " ";
			}
			cout << "\n \n";
		}
		else if (nz == 5)
		{
			/*���� ��� ����������� �����. 
			����� ���������� ����� ������� ���� �����, 
			��������� ������� ����������� �������� �������.*/
			int a=5, b=9;
			cout << "Kratnoe etix chisel   "<<zd2(a, b);
		}
	
	}
}