#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	system("CLS");
	
	// Cau 0
	printf("---------- CAU 0 ----------\n");
	int A[100];
	int na;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &na);
	// Nhap mang
	for (int i=0; i<na; i++)
	{
		printf("A[%d] : ", i);
		scanf("%d", &A[i]);
	}
	// Xuat mang
	printf("Mang A la: ");
	for (int i=0; i<na; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	
	// Cau 1
	printf("---------- CAU 1 ----------\n");
	printf("In mang A theo chieu nguoc lai: ");
	for (int i=na-1; i>=0; i--)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	// Cau 2
	printf("---------- CAU 3 ----------\n");
	// Tim Sum
	int sum = 0;
	for (int i=0; i<na; i++)
	{
		sum = sum + A[i];
	}
	printf("Sum A: %d\n", sum);

	// Tim min & max
	int min = A[0];
	int max = A[0];
	for (int i=1; i<na; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	printf("Min A: %d \nMax A: %d\n", min, max);

	//Cau 3
	printf("---------- CAU 3 ----------\n");
	int B[100];
	for (int i=0; i<na; i++)
	{
		B[i] = A[i];
	}
	printf("Mang B duoc copy la: ");
	for (int i=na-1; i>=0; i--)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	// Cau 4
	printf("---------- CAU 4 ----------\n");
	int x;
	printf("Nhap gia tri x can chen: ");
	scanf("%d", &x);

	int k;
	printf("Nhap vi tri k thuoc [0, %d] can chen vao mang B: ", na-1);
	scanf("%d", &k);

	int nb = na;
	// Doi vi tri cua nhung phan tu sau k them 1 don vi
	for (int i=nb-1; i>=k; i--)
	{
		B[i+1] = B[i];
	}

	// Gan x cho vi tri can chen
	B[k] = x;

	// Tang kich thuoc mang B len 1 
	nb = nb+1;

	// In mang B
	printf("Mang B la ");
	for (int i=0; i<nb; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");

	// Cau 5
	printf("---------- CAU 5 ----------\n");
	// SX mang A tang dan
	for (int i=0; i<na-1; i++)
	{
		for (int j=i+1; j<na; j++)
		{
			if (A[j] < A[i])
			{
				// Hoan vi A[j] va A[i]
				int tmp = A[j];
				A[j] = A[i];
				A[i] = tmp;
			}
		}
	}

	printf("Mang A sau khi sort tang dan la: ");
	for (int i=0; i<na; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	// SX mang B giam dan
	for (int i=0; i<nb-1; i++)
	{
		for (int j=i+1; j<nb; j++)
		{
			if (B[j] > B[i])
			{
				// Hoan vi A[j] va A[i]
				int tmp = B[j];
				B[j] = B[i];
				B[i] = tmp;
			}
		}
	}

	printf("Mang B sau khi sap xep giam dan la: ");
	for (int i=0; i<nb; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");

	// Cau 6
	printf("---------- CAU 6 ----------\n");
	int C[100];
	int nc = na+nb;
	for (int i=0; i<na; i++)
	{
		C[i] = A[i];
	}
	for (int i=na; i<nc; i++)
	{
		C[i] = B[i-na];
	}

	printf("Mang C la: ");
	for (int i=0; i<nc; i++)
	{
		printf("%d ", C[i]);
	}
	printf("\n");

	// Cau 7
	printf("---------- CAU 7 ----------\n");
	int count = 0;
	for (int i=0; i<nc; i++)
	{
		if (C[i]>0)
		{
			float a = sqrt(float(C[i]));
			if (a*a == C[i]*1.0)
			{
				count = count+1;
			}
		}
	}
	printf("So phan tu la so chinh phuong co trong mang C la: %d\n", count);
}