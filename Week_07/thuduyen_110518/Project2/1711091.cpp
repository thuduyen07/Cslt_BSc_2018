#include<stdio.h>
#include<conio.h>
int demchuoi(char a[])
{
	int na = 0;
	for (int i = 0; a[i] != '\0'; i = i + 1)
	{
		na = na + 1;
	}
	for (int i = 0; i <= na; i = i + 1)
	{
		printf("%c", a[i]);
	}
	printf("%s", a);
	printf("\nChuoi %c co %d ki tu", a, na);
	return na;
}
int copychuoi(char b[], char c[])
{
	int i;
	for (i = 0; c[i] != '\0'; i = i + 1)
	{
		b[i] = c[i];
	}
	b[i] = '\0';
	return 0;
}
int doichu(char b1[], char c1[])
{
	int j = 0;
	for (int i = 0; c1[i] != '\0'; i = i + 1)
	{
		if (c1[i] >= '0'&&c1[i] <= '9')
		{
			b1[j] = c1[i];
			j = j + 1;
		}
		if (c1[i] >= 'A'&&c1[i] <= 'Z')
		{
			int h;
			h = int(c1[i]) + 32;
			b1[j] = char(h);
			j = j + 1;
		}
		if (c1[i] >= 'a'&&c1[i] <= 'z')
		{
			int h;
			h = int(c1[i]) - 32;
			b1[j] = char(h);
			j = j + 1;
		}
		else
		{
			b1[j] = c1[i];
			j = j + 1;
		}
	}
	return 0;
}
int noichuoi(char d[], char e[], char f[])
{
	int j = 0;
	for (int i = 0; e[i] != '\0'; i = i + 1)
	{
		d[j] = e[i];
		j = j + 1;
	}
	for (int i = 0; f[i] != '\0'; i = i + 1)
	{
		d[j] = f[i];
		j = j + 1;
	}
	d[j] = '\0';
	return 0;
}
int xepchuoi(char g[], char h[])
{
	int j = 0;
	for (int i = 0; h[i] != '\0'; i = i + 1)
	{
		if (h[i] >= 'A' && h[i] <= 'Z')
		{
			g[j] = h[i];
			j = j + 1;
		}
	}
	for (int i = 0; h[i] != '\0'; i = i + 1)
	{
		if (h[i] >= 'a' && h[i] <= 'z')
		{
			g[j] = h[i];
			j = j + 1;
		}
	}
	for (int i = 0; h[i] != '\0'; i = i + 1)
	{
		if (h[i] >= '0' && h[i] <= '9')
		{
			g[j] = h[i];
			j = j + 1;
		}
	}
	g[j] = '\0';
	for (int i = 0; g[i] != '\0'; i = i + 1)
	{
		printf("%c", g[i]);
	}
	return 0;
}
int demmang(int A1[100])
{
	int nA1=0;
	nA1 = sizeof(A1) / sizeof(A1[0]);
	printf("\nMang %c gom %d ki tu", A1, nA1);
	return nA1;
}
int xoamang(char A2[100], char A22[100])
{
	int x1, x2;
	printf("\nNhap vi tri x1 >= 0: ");
	scanf_s("%d", &x1);
	printf("\nNhap vi tri %d <= x2 <= %d: ", x1, (x1 + 5));
	scanf_s("%d", &x2);
	int j = x2;
	for (int i = x1 + 1; A2[i]!='\0'; i = i + 1)
	{
		A2[i] = A22[j];
	}
	return 0;
}
int inmang(int A3[100])
{
	for (int i = 0; A3[i] != '\0'; i = i + 1)
	{
		printf("%5d", A3[i]);
	}
	return 0;
}
int xepmang(int A5[100],int A6[100])
{
	int j = 0;
	for (int i = 0; A6[i] != '\0'; i = i + 1)
	{
		if (A6[i] == unsigned int(A6[i]))
		{
			A5[j] = A6[i];
			j = j + 1;
		}
	}
	for (int i = 0; A6[i] != '\0'; i = i + 1)
	{
		if (A6[i] != unsigned int(A6[i]))
		{
			A5[j] = A6[i];
			j = j + 1;
		}
	}
	for (int i = 0; A6 != '\0'; i = i + 1)
	{
		if (A6[i] == 0)
		{
			A5[j] = 0;
			j = j + 1;
		}
	}
	for (int i = 0; A5[i] != '\0'; i = i + 1)
	{
		printf("%d", A5[i]);
	}
	return 0;
}
int bt1()
{
	printf("CAU 0");
	char A[100];
	printf("\nNhap chuoi bat ki: ");
	scanf_s("%s", &A);
	demchuoi(A);
	printf("\n\nCAU 1");
	char B1[100];
	char B[100];
	copychuoi(B1, A);
	doichu(B, B1);
	printf("\nChuoi B: ");
	demchuoi(B);
	printf("\n\nCAU 2");
	char C[100];
	noichuoi(C, A, B);
	printf("\nChuoi C: ");
	demchuoi(C);
	printf("\n\nCAU3");
	char D[100];
	xepchuoi(D, C);
	printf("\nChuoi D: ");
	demchuoi(D);
	thongbao();
}
int bt2()
{

}
int menu()
{
	int bt;
	printf("--------------MENU---------------");
	printf("\n1. Bai 1 - Strings");
	printf("\n2. Bai 2 - Arrays");
	printf("\nSo khac. Exit");
	printf("\nLua chon: ");
	scanf_s("%d", &bt);
	switch (bt)
	{
	case 1:
	{
			  bt1();
	}
	case 2:
	{
			  bt2();
	}
	default:
	{
			   return 0;
	}
	}
	return 0;
}
int thongbao(int choose = 0)
{
	printf("\nBan muon chay lai bai nay?");
	printf("\n1. Co");
	printf("\n2. Khong va quay lai Menu");
	printf("\nSo khac. Khong va exit");
	printf("\nLua chon: ");
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
			  printf("QUAY LAI BAI NAY");
	}
	case 2:
	{
			  menu();
	}
	default:
	{
			   return 0;
	}
	}
	return 0;
}
int main()
{
	menu();

	_getch();
	return 0;
}

