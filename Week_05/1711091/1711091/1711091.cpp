#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	printf("--------------CAU0---------------");
	int n;
	int A[100] = { 0 };
	printf("\nNhap so phan tu mang A: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i = i + 1)
	{
		printf("\nA[%d]: ", i);
		scanf_s("%d", &A[i]);
	}
	printf("\nMang A la: ");
	for (int i = 0; i < n; i = i + 1)
	{
		printf("%5d", A[i]);
	}
	printf("\n\n----------------CAU1---------------");
	printf("\nIn mang A theo chieu nguoc lai: ");
	for (int i = n - 1; i >= 0; i = i - 1)
	{
		printf("%5d", A[i]);
	}
	printf("\n\n----------------CAU2---------------");
	int sum = 0, min = A[0], max = A[0];
	for (int i = 0; i < n; i = i + 1)
	{
		sum = sum + A[i];
	}
	printf("\nSum A: %d", sum);
	for (int i = 0; i < n; i = i + 1)
	{
		if (A[i] <= min)
		{
			min = A[i];
		}
	}
	printf("\nMin A: %d", min);
	for (int i = 0; i < n; i = i + 1)
	{
		if (A[i] >= max)
		{
			max = A[i];
		}
	}
	printf("\nMax A: %d", max);
	printf("\n\n----------------CAU3---------------");
	int B[100] = { 0 };
	printf("\nMang B duoc copy la: ");
	for (int i = 0; i < n; i = i + 1)
	{
		B[i] = A[i];
		printf("%5d", B[i]);
	}
	printf("\n\n----------------CAU4---------------");
	int x, k;
	printf("\nNhap gia tri cua x can chen: ");
	scanf_s("%d", &x);
	printf("\nNhap vi tri thuoc [0,%d] can chen vao mang B: ", n);
	scanf_s("%d", &k);
	for (int i = n; i > k; i = i - 1)
	{
		B[i] = B[i - 1];
	}
	B[k] = x;
	printf("\nMang B la: ");
	for (int i = 0; i <= n; i = i + 1)
	{
		printf("%5d", B[i]);
	}
	printf("\n\n----------------CAU5---------------");	
	for (int i = 0; i < (n-1); i = i + 1)
	{
		for (int j = i + 1; j < n; j = j + 1)
		{
			if (A[j] < A[i])
			{
				int t;
				t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
	printf("\nMang A sau khi xep tang dan la: ");
	for (int i = 0; i < n; i = i + 1)
	{
		printf("%5d", A[i]);
	}
	for (int i = 0; i < n; i = i + 1)
	{
		for (int j = i + 1; j < n+1; j = j + 1)
		{
			if (B[j] > B[i])
			{
				int t;
				t = B[i];
				B[i] = B[j];
				B[j] = t;
			}
		}
	}
	printf("\nMang B sau khi xep giam dan la: ");
	for (int i = 0; i <= n; i = i + 1)
	{
		printf("%5d", B[i]);
	}
	printf("\n\n----------------CAU6---------------");
	int C[200] = { 0 };
	int n1 = 2 * n;
	int m = 0;
	for ( int i = 0; i < n; i = i + 1)
	{
		C[m] = A[i];
		m = m + 1;
	}
	int m1 = n;
	for ( int i = 0; i <= n; i = i + 1)
	{
		C[m1] = B[i];
		m1 = m1 + 1;
	}
	printf("\nMang C la: ");
	for (int i = 0; i <= n1; i = i + 1)
	{
		printf("%5d", C[i]);
	}
	printf("\n\n----------------CAU7---------------");
	int dem = 0;
	float can;
	float can1;
	for (int i = 0; i <= n1; i = i + 1)
	{
		can = sqrt(C[i]);
		can1 = can - int(can);
		if (can1 == 0)
		{
			dem = dem + 1;
		}
	}
	printf("\nSo phan tu la so chinh phuong co trong mang C: %d", dem);
	_getch();
	return 0;
}