/*
Ho ten: NGUYEN THI THU DUYEN
MSSV:	1711091
IDE:	Microsoft Visual Studio 2017
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	printf("menu");
	int bt;
	printf("\nChon bai tap muon test:");
	printf("\n1. Bai 1 - Strings");
	printf("\n2. Bai 2 - Arrays");
	printf("\nSo khac. Exit");
	printf("\nLua chon: ");
	scanf_s("%d", &bt);
	switch (bt)
	{
	case 1:
	{
		printf("\n\ncau0");
		char A[100] = { 0 };
		getchar();
		printf("\nNhap chuoi bat ki: ");
		fgets(A,100,stdin);
		printf("\nChuoi A: ");
		printf("%s", A);
		int cA = 0;
		for (int i = 0; A[i] != '\n'; i = i + 1)
		{
			cA = cA + 1;
		}
		printf("\nChuoi A co %d ki tu", cA);
		printf("\n\ncau1");
		char B1[100] = { 0 };
		int i1;
		for (i1 = 0; A[i1] != '\n'; i1 = i1 + 1)
		{
			B1[i1] = A[i1];
		}
		B1[i1] = '\n';
		char B[100] = { 0 };
		int j1 = 0;
		for (int i = 0; B1[i] != '\n'; i = i + 1)
		{
			if ((B1[i] >= 'A') && (B1[i] <= 'Z'))
			{
				int h;
				h = int(B1[i]) + 32;
				B[j1] = char(h);
				j1 = j1 + 1;
			}
			else
			{
				if ((B1[i] >= 'a') && (B1[i] <= 'z'))
				{
					int h;
					h = int(B1[i]) - 32;
					B[j1] = char(h);
					j1 = j1 + 1;
				}
				else
				{
					B[j1] = B1[i];
					j1 = j1 + 1;
				}
			}
		}
		B[j1] = '\n';
		printf("\nChuoi B: ");
		printf("%s", B);
		int cB = 0;
		for (int i = 0; B[i] != '\n'; i = i + 1)
		{
			cB = cB + 1;
		}
		printf("\nChuoi B co %d ki tu", cB);
		printf("\n\ncau2");
		char c[200] = { 0 };
		int i2 = 0;
		for (int i = 0; A[i] != '\n'; i = i + 1)
		{
			c[i2] = A[i];
			i2 = i2 + 1;
		}
		for (int i = 0; B[i] != '\n'; i = i + 1)
		{
			c[i2] = B[i];
			i2 = i2 + 1;
		}
		c[i2] = '\n';
		printf("\nChuoi C: ");
		printf("%s", c);
		int cc = 0;
		for (int i = 0; c[i] != '\n'; i = i + 1)
		{
			cc = cc + 1;
		}
		printf("\nChuoi C co %d ki tu", cc);
		printf("\n\ncau3");
		char d[200] = { 0 };
		int i3 = 0;
		for (int i = 0; c[i] != '\n'; i = i + 1)
		{
			if ((c[i] >= 'A') && (c[i] <= 'Z'))
			{
				d[i3] = c[i];
				i3 = i3 + 1;
			}
		}
		for (int i = 0; c[i] != '\n'; i = i + 1)
		{
			if ((c[i] >= 'a') && (c[i] <= 'z'))
			{
				d[i3] = c[i];
				i3 = i3 + 1;
			}
		}
		for (int i = 0; c[i] != '\n'; i = i + 1)
		{
			if ((c[i] >= '0') && (c[i] <= '9'))
			{
				d[i3] = c[i];
				i3 = i3 + 1;
			}
		}
		d[i3] = '\n';
		printf("\nChuoi D: ");
		printf("%s", d);
		int cd = 0;
		for (int i = 0; d[i] != '\n'; i = i + 1)
		{
			cd = cd + 1;
		}
		printf("\nChuoi D co %d ki tu", cd);
		printf("\nBan muon chay lai bai nay?");
		printf("\n1. Co");
		printf("\n2. Khong va quay lai menu");
		printf("\nSo khac. Khong va exit");
		int choose;
		printf("\nLua chon: ");
		scanf_s("%d", &choose);


	}
	case 2: 
	{
		printf("\ncau0");
		int a[15] = { 1,3,5,-2,-4,2,0,9,0,-9,-3,10,7,4,-5 };
		int dem = sizeof(a) / sizeof(a[0]);
		printf("\nMang A: ");
		for (int i = 0;i<dem; i = i + 1)
		{
			printf("%5d", a[i]);
		}
		printf("\nMang A gom %d phan tu", dem);
		printf("\n\ncau1");
		int x1, x2;
		printf("\nNhap vi tri x1 >= 0: ");
		scanf_s("%d", &x1);
		printf("\nNhap vi tri %d <= x2 <= %d: ", x1, x1 + 5);
		scanf_s("%d", &x2);
		int a1[15];
		printf("\nMang A: ");
		int j1 = 0;
		for (int i = 0; i<x1; i = i + 1)
		{
			a1[j1] = a[i];
			printf("%5d", a1[j1]);
			j1 = j1 + 1;
		}
		for (int i = x2+1; i <dem; i = i + 1)
		{
			a1[j1] = a[i];
			printf("%5d", a1[j1]);
			j1 = j1 + 1;
		}
		int dema1 = sizeof(a1) / sizeof(a1[0]);
		printf("\nMang A gom %d phan tu", dema1);
		printf("\n\ncau2");
		int k;
		printf("\nNhap 1 <= k <= %d: ", dema1);
		scanf_s("%d", &k);
		int max = a[0];
		int sum = 0;
		for (int i = 0; i < 15; i = i + 1)
		{
			for (int j = i; j < i + k; j = j + 1)
			{
				sum = sum + a[j];
			}
			if (sum > max)
			{
				max = sum;
			}
		}
		printf("\nTong lon nhat la: %d", max);


		printf("\nBan muon chay lai bai nay?");
		printf("\n1. Co");
		printf("\n2. Khong va quay lai menu");
		printf("\nSo khac. Khong va exit");
		int choose;
		printf("\nLua chon: ");
		scanf_s("%d", &choose);
	}
	}
	_getch();
	return 0;
}