#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define I 2,32166
#define S 2,7076

void main()
{
//1
	setlocale(LC_ALL, "RUS");
	int A, B;
	puts("������� ����� A");
	scanf("%d", &A);
	puts("������� ����� B");

	scanf("%d", &B);
	printf("������� ����� %d � %d\n", A, B);

	printf("A+B=%i\n", A + B);
	printf("A-B=%i\n", A - B);
	printf("B-A=%i\n", B - A);
	printf("A*B=%i\n", A * B);
	printf("B/A=%i\n�������:%i\n", B / A, B % A);
//2
	int dym;
	float result, res2, res3;
	puts("������� �������� ��� �������\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d ���������� ������ � ��� %.2f �� \n", dym, result);
	res2 = I * dym;
	printf("%d ���������� ������ � ��� %.2f �� \n", dym, res2);
	res3 = S * dym;
	printf("%d �������������� ������ � ��� %.2f �� \n", dym, res3);

//3
	int a, b;
	puts("������� ����� a\n");
	scanf("%d", &a);
	printf("������� ����� %d\n", a);
	puts("������� ����� b\n");
	scanf("%d", &b);
	printf("������� ����� %d\n", b);
	puts("_______________________________\n");
	printf("|  a * b  |  a + b  |  a - b  |\n");
	puts("-------------------------------\n");
	printf("|  %d * %d  |  %d + %d  |  %d - %d  |\n", a, b, a, b, a, b);
	puts("-------------------------------\n");
	printf("|  %d\t|  %d\t|  %d\t|", (a * b), (a + b), (a - b));

}