#define _CRT_SECURE_NO_WARNINGS
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

int main(int argc, char* argv[]) {
    double a, b, c;
    double x1, x2, d;

    
    printf("vvedite a: \n");
    scanf("%lf", &a);
    printf("vvedite b: \n");
    scanf("%lf", &b);
    printf("vvedite c: \n");
    scanf("%lf", &c);

   
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Beskonechno mnogo resheniy.\n");
            }
            else {
                printf("Net resheniy.\n");
            }
        }
        else {
            printf("Lineynoe uravnenie. Reshenie: x = %lf\n", -c / b);
        }
        return 0;
    }

    
    d = pow(b, 2) - 4 * a * c;
    printf("d = %lf \n", d);

    
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %lf \n", x1);
        printf("x2 = %lf \n", x2);
    }
    else if (d == 0) {
        x1 = -b / (2 * a);
        printf("Odin koren: x1 = %lf \n", x1);
    }
    else {
        printf("Net deystvitelnyh korney.\n");
    }

    return 0;
}