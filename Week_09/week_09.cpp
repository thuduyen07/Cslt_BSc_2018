/*BAI KIEM TRA THUC HANH CSDL SO 1
Ho ten:	NGUYEN THI THU DUYEN
MSSV:	1711091
Lop:	17TTH1TN
IDE:	Microsoft Visual Studio 2017
*/

#include <stdio.h>
#include "iostream"
#include<conio.h>
#include<Windows.h>
#include<math.h>
using namespace std;
int pt;
int ucln(int a, int b);
int bcnn(int a, int b);
int rgps(int a, int b);
int fib(int a);
int kc(int xa,int ya,int xb,int yb );
int td(int xa,int ya,int xb,int yb);
int ptdt(int a1,int c1,int a2,int c2);
int nhapmang(int a[100]);
int xuatmang(int a[100]);
int chen(int a[100], int x, int k);
int xepmang(int a[100]);
int dq(int a);
int gt(int a, int b);
int tgp(int a);
// BAI 1//
int ex1() {
	printf("\n\n\n");
	printf("\nStarting exercise 1\n");
	int a, b;
	do
	{
		printf("\nNhap so nguyen duong a: ");
		scanf_s("%d", &a);
	} while (a < 1);
	do
	{
		printf("\nNhap so nguyen duong b: ");
		scanf_s("%d", &b);
	} while (b < 1);
	printf("\n1.UCLN(%d,%d)=%d", a, b, ucln(a, b));
	printf("\n  BCNN(%d,%d)=", a, b);
	bcnn(a, b);
	printf("\n2.Phan so %d/%d sau rut gon la: ", a, b);
	rgps(a, b);
	printf("\n3.%d phan tu dau tien cua day Fibonacci la: ",a);
	fib(a);
	printf("\n\n\n");
	return 0;
}
// BAI 2//
int ex2() {
	printf("\n\n\n");
	printf("\nStarting exercise 2\n");
	int xa, ya, xb, yb;
	printf("\nNhap toa do diem A: ");
	printf("\n	Hoanh do: ");
	scanf_s("%d", &xa);
	printf("\n	Tung do: ");
	scanf_s("%d", &ya);
	printf("\nNhap toa do diem B: ");
	printf("\n	Hoanh do: ");
	scanf_s("%d", &xb);
	printf("\n	Tung do: ");
	scanf_s("%d", &yb);
	printf("\n1.Khoang cach giua hai diem A va B la: ");
	kc(xa,ya,xb,yb);
	printf("\n2.Toa do trung diem I cua doan thang AB la:  I");
	td(xa, ya, xb, yb);
	printf("\n3.Phuong trinh duong thang d di qua A va B la:");
	ptdt(xa,ya,xb,yb);
	printf("\n\n\n");
	return 0;
}
// BAI 3//
int ex3() {
	printf("\n\n\n");
	printf("\nStarting exercise 3\n");
	printf("\n1.");
	int a[100] = { 0 };
	nhapmang(a);
	xuatmang(a);
	int x, k;
	pt = pt + 1;
	printf("\n2.Nhap gia tri x can chen: ");
	scanf_s("%d", &x);
	do
	{
		printf("\n  Nhap vi tri k can chen la : ");
		scanf_s("%d", &k);
	} while (k < 0);
	printf("\n  Sau khi chen gia tri %d vao vi tri %d la: ",x,k);
	chen(a, x, k);
	printf("\n3.Sau khi sap xep tang dan la: ");
	xepmang(a);
	printf("\n\n\n");
	return 0;

}
// BAI 4//
int ex4() {
	printf("\n\n\n");
	printf("\nStarting exercise 4\n");
	int n;
	do
	{
		printf("\nNhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n < 1);
	printf("\nTam giac Pascal bac %d la: \n", n);
	tgp(n);
	printf("\n\n\n");
	return 0;

}
// BAI 5//
int ex5() {
	printf("\nStarting exercise 5\n");
	return 0;

}

int ucln(int a, int b)
{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}
	return a + b;
}
int bcnn(int a, int b)
{
	if (a == 0 && b == 0)
	{
		printf("%d", a);
		return a;
	}
	else
	{
		if (a < 0)
		{
			a = -a;
		}
		if (b < 0)
		{
			b = -b;
		}
		int uc = ucln(a, b);
		int bc = ((a*b) / uc);
		printf("%d", bc);
		return bc;
	}
}
int rgps(int a, int b)
{
	int c = (ucln(a, b));
	a = a /c;
	b = b / c;
	if (b == 1)
	{
		printf("%d", a);
	}
	if (b != 1)
	{
		printf("%d/%d", a, b);
	}
	return 0;
}
int fib(int a)
{
	int lastf = 1;
	int f = 1;
	if (a == 1)
	{
		printf("%d", f);
	}
	if (a == 2)
	{
		printf("%d\t%d", f, lastf);
	}
	if (a > 2)
	{
		printf("\n%d\t%d", f, lastf);
		for (int i = 1; i <= a-2; i = i + 1)
		{
			int u = f;
			f = f + lastf;
			printf("\t%d", f);
			lastf = u;
		}
	}
	return 0;
}
int kc(int xa,int ya,int xb,int yb)
{
	float kc;
	kc = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("%.3f", kc);
	return 0;
}
int td(int xa,int ya,int xb,int yb)
{
	float xi, yi;
	xi = (xa + xb) / 2.0;
	yi = (ya + yb) / 2.0;
	printf("(%.2f;%.2f)", xi, yi);
	return 0;
}
int ptdt(int a1, int c1, int a2, int c2)
{
	int b1 = 1;
	int b2 = 1;
	float d, dx, dy, x, y;
	d = a1 * b2 - a2 * b1;
	dx = c1 * b2 - c2 * b1;
	dy = a1 * c2 - a2 * c1;
	if (d)
	{
		x = dx / d;
		y = dy / d;
		if (x == 0)
		{
			printf("\nPhuong trinh duong thang qua A va B la: y=%.2f\n", x);

		}
		if (x != 0 && y != 0)
		{
			printf("\nPhuong trinh duong thang qua A va B la: y=%.2fx+%.2f\n", x, y);
		}
	}
	else
	{
		if (a1 == a2 )
		{
			x = a1;
			y = 0;
			printf("\nPhuong trinh duong thang qua A va B la: x=%.2f\n",x);
		}
		if (c1 == c2)
		{
			y = c1;
			printf("\nPhuong trinh duong thang qua A va B la: y=%.2f\n",y);
		}
		if(dx==0)
		{
			printf("\n\tCo vo so phuong trinh duong thang\n");
		}
	}
	return 0;
}
int nhapmang(int a[100])
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &pt);
	} while (pt < 1);
	printf("\nNhap mang:\n");
	for (int i = 0; i < pt; i = i + 1)
	{
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	return 0;

}
int xuatmang(int a[100])
{
	printf("\n  Mang la:\n");
	for (int i = 0; i < pt; i = i + 1)
	{
			printf("%7d", a[i]);
	}
	return 0;
}
int chen(int a[100], int x, int k)
{
	for (int i = pt; i >= k; i = i - 1)
	{
		a[i + 1] = a[i];
	}
	a[k] = x;
	printf("\n");
	xuatmang(a);
	return 0;
}
int xepmang(int a[100])
{
	for (int i = 0; i < pt-1; i = i + 1)
	{
		for(int j=i+1;j<pt;j=j+1)
		{ 
			if (a[i] > a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	xuatmang(a);
	return 0;
}
int dq(int a)
{
	int i;
	for (i = 1; a > 1; a = a - 1)
	{
		i = i * a;
	}
	return i;
}
int gt(int a, int b)
{
	return (dq(a) /( dq(a - b)*dq(b)));
}
int tgp(int a)
{
	for (int i = 0; i <= a; i = i + 1)
	{
		for (int j = 0; j <= a - i; j = j + 1)
		{
			printf("   ");
		}
		for (int j = 0; j <= i; j = j + 1)
		{
			printf("%7d", gt(i, j));
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int ex, flag = 0;
	do {
		if (flag) {
			printf("pls re-");
		}
		else {
			flag = 1;
		}
		printf("input ex (a number or 0 to exit)");
		cin >> ex;
		switch (ex) {
		case 0: printf("exit"); break;
		case 1: ex1(); break;
		case 2:	ex2(); break;
		case 3:	ex3(); break;
		case 4: ex4(); break;
		case 5: ex5(); break;
		default: printf("exercise not exist"); break;
		}
	} while (ex != 0);
}