#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* 1/�������� ������������ ���������� a, b � � � ������ �� ��������. 
2/�����������, ��� a, b, c ���� ������������ ����������� ��������� ������� �� ������� �������� �� ���-��� �1, �2. 
3/������� ��������� ����� �������� �������������, ��� ������� ����� ��-��� ������������.
	
	����������. ��� ���������� ������� ����������� ������� ���������� ����-������� ����� (���������� � �������), � ��� �� ����� ������ �� �������.
	���������� � ������� - ���������� ������������ ����	 math.h � ������-���� ������� pow, ������ ���������� �������� ������ ���� ���������� ��������, � ������ - �������, ��� ������ double.
	����� ������ - ������������ ���� stdio.h, ������� printf, ������ ���������� �������� ��������� ������, � ����������� - ����������, �������� ������� ������-���� �������.





run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c;
	double x1,x2,d;
	
	
	a = 1.2;
	b = 0.5;
	c = 3.3;
	
	d = pow(b,a) - 4*a*c;
	printf("d = %lf \n",d);
	
	if (d>0){
	printf("x1 = %lf \n",x1);
	printf("x2 = %lf \n",x2);
}
	if (d < 0){
	printf("net korney");
}
	if (d = 0){
	
	
	x1 = -b/(2*a);
	printf("x1 = %lf \n",x1);
}
	
	
	return 0;
}
