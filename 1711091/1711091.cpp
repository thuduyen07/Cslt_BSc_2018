/*
Ho Ten: NGUYEN THI THU DUYEN
MSSV:	1711091
IDE:	Microsoft Visual studioi 2017
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	int choose, choose1;
	do
	{
		printf("MENU");
		printf("\nChon bai tap muon test: ");
		printf("\n1. Bai 1 - 2D Arrays");
		printf("\n2. Bai 2 - Pointer");
		printf("\n3. Bai 3 - String");
		printf("\nSo khac. Exit");
		printf("\nLua chon: ");
		scanf_s("%d", &choose);
		do
		{
			if (choose < 1 || choose >3)
			{
				return 0;
			}
			else
			{
				if (choose == 1)
				{
					printf("\n\nCAU0");
					int ca, da;
					int A[100][100] = { 0 };
					printf("\nNhap so dong cua ma tran A: ");
					scanf_s("%d", &da);
					printf("\nNhap so cot cua ma tran A: ");
					scanf_s("%d", &ca);
					printf("\nVay A co size la: %dx%d",da,ca);
					printf("\nNhap gia tri cho ma tran A: ");
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("\nA[%d][%d]: ", i, j);
							scanf_s("%d", &A[i][j]);
						}
					}
					printf("\nMa tran A <%dx%d> co %d phan tu la: \n", da, ca, da*ca);
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", A[i][j]);
						}
						printf("\n");
					}
					printf("\n\nCAU1");
					int min = A[0][0], max = A[0][0], sum = 0;
					float mean;
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							if (A[i][j] < min)
							{
								min = A[i][j];
							}
							if (A[i][j] > max)
							{
								max = A[i][j];
							}
							sum = sum + A[i][j];
						}
					}
					mean = sum / (da*ca);
					printf("\nMin A: %d", min);
					printf("\nMax A: %d", max);
					printf("\nSum A: %d", sum);
					printf("\nMean A: %d", mean);
					printf("\n\nCAU2");
					int B[100][100] = { 0 };
					int C[100][100] = { 0 };
					int B1[10000] = { 0 };
					int i2 = 0;
					int ib = 0;
					int ic = da * ca - 1;
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							B1[i2] = A[i][j];
							i2 = i2 + 1;
						}
					}
					for (int i = 0; i < ic; i = i + 1)
					{
						for (int j = 1; j < (da*ca); j = j + 1)
						{
							if (B1[i] > B1[j])
							{
								int t;
								t = B1[i];
								B1[i] = B1[j];
								B1[j] = t;
							}
						}
					}
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							B[i][j] = B1[ib];
							C[i][j] = B1[ic];
							ib = ib + 1;
							ic = ic - 1;
						}
					}
					printf("\nMa tran B <%dx%d> co %d phan tu la: \n", da, ca, da*ca);
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", B[i][j]);
						}
						printf("\n");
					}
					printf("\nMa tran C <%dx%d> co %d phan tu la: \n", da, ca, da*ca);
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", C[i][j]);
						}
						printf("\n");
					}
					printf("\n\nCAU3");
					int tong[100][100] = { 0 }, hieu[100][100] = { 0 }, tich[100][100] = { 0 };
					float thuong[100][100] = { 0 };
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							tong[i][j] = B[i][j] + C[i][j];
							hieu[i][j] = B[i][j] - C[i][j];
							tich[i][j] = B[i][j] * C[i][j];
							thuong[i][j] = B[i][j] / C[i][j];
						}
					}
					printf("\nMa tran Tong la: \n");
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", tong[i][j]);
						}
						printf("\n");
					}
					printf("\nMa tran Hieu la: \n");
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", hieu[i][j]);
						}
						printf("\n");
					}
					printf("\nMa tran Tich la: \n");
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", tich[i][j]);
						}
						printf("\n");
					}
					printf("\nMa tran Thuong la: \n");
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%.3f\t", thuong[i][j]);
						}
						printf("\n");
					}
					printf("\n\nCAU4");
					printf("\nMa tran D <%dx%d> co %d phan tu la: \n", ca, da, da*ca);
					int D[100][100] = { 0 };
					for (int i = 0; i < ca; i = i + 1)
					{
						for (int j = 0; j < da; j = j + 1)
						{
							D[i][j] = C[j][i];
							printf("%d\t", D[i][j]);
						}
						printf("\n");
					}
					int E[100][100] = { 0 };
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							E[i][j] = 0;
							int sum4 = 0;
							for (int k = 0; k < ca; k = k + 1)
							{
								E[i][j] = sum4 + B[i][k] * D[k][j];
							}
						}
					}
					printf("\nMa tran E <%dx%d> co %d phan tu la: \n");
					for (int i = 0; i < da; i = i + 1)
					{
						for (int j = 0; j < ca; j = j + 1)
						{
							printf("%d\t", E[i][j]);
						}
						printf("\n");
					}
				}
				if (choose == 2)
				{
					printf("\n\nCAU0");
					int a;
					printf("\nNhap bien a: ");
					scanf_s("%d", &a);
					int *pa;
					int **ppa;
					pa = &a;
					ppa = &pa;
					printf("\nGia tri bien a: %d", a);
					printf("\nGia tri bien pa: %p", pa);
					printf("\nGia tri bien ppa: %p", ppa);
					printf("\nCAU1");
					printf("\nGia tri bien a (gian tiep qua pa): %d", *pa);
					printf("\nGia tri bien pa (gian tiep qua ppa): %p", *ppa);
					printf("\nGia tri bien a (gian tiep qua ppa): %d", **ppa);
					printf("\n\nCAU2");
					int b;
					printf("\nNhap bien b: ");
					scanf_s("%d", &b);
					int *pb;
					int b2;
					pb = &b;
					b2 = *pa;
					a = *pb;
					b = b2;
					printf("\nSau khi hoan doi: a=%d,\tb=%d", a, b);
					printf("\nCAU3");
					int nc;
					int *pc;
					int c[100] = { 0 };
					pc = &c[0];
					printf("\nNhap so phan tu mang C: ");
					scanf_s("%d", &nc);
					for (int i = 0; i < nc; i = i + 1)
					{
						printf("C[%d]: ", i);
						scanf_s("%d", pc + i);
					}
					printf("\nMang C co %d phan tu: ");
					for (int i = 0; i < nc; i = i + 1)
					{
						printf("%d\t", *(pc + i));
					}
				}
				if (choose == 3)
				{
					getchar();
					char a[100];
					printf("\nNhap mang A: ");
					fgets(a, 100, stdin);
					printf("\nChuoi A la: %s", a);
					char b[100];
					strcpy_s(b, a);
					printf("\nChuoi B la: %s",b);
					for (int i = 0; b[i] != '\n'; i = i + 1)
					{
						if (b[i] >= 'A'&&b[i] <= 'Z')
						{
							b[i] = b[i] + 32;
						}
						else
						{
							if(b[i] >= 'a'&&b[i] <= 'z')
							{
								b[i] = b[i] - 32;
							}
						}
					}
					printf("\nChuoi B la: %s", b);
					char c[100];
					printf("\nChuoi C la: %s", strcat(b, a));

				}
			}
			printf("\nBan muon chay lai bai nay?");
			printf("\nCo");
			printf("\nKhong. Menu");
			printf("\nSo khac. Exit");
			printf("\nLua chon: ");
			scanf_s("%d", &choose1);
		}
		while (choose1 == 1);
	}
	while (choose1 == 2);
	_getch();
	return 0;
}