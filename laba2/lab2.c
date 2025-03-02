#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�������� ������ ������ ���� double �������� 3 �� 3. 
// ������ � ������� ��� ��������, ������� �� ������� ����� ��� ���������, ������������� �� ������� ��������� � ����� ���������, ������������� ��  �������� ���������.
//�������� ������ ������ ���� int �������� 2 �� 2. 
// ������ � ������� ��� ��������, ������� �� ������� ������� ������ �������

int main() {
    
    double matrixDouble[3][3];
    double sumMainDiagonal = 0;
    double sumSecondaryDiagonal = 0;

    
    printf("VVEDITE ZNACHENIE MATRICI 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrixDouble[%d][%d]: ", i, j);
            scanf("%lf", &matrixDouble[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        sumMainDiagonal += matrixDouble[i][i];         
        sumSecondaryDiagonal += matrixDouble[i][2 - i]; 
    }

    
    printf("SUMMA ELEMENTOV GLAVNOY DIAGONALI: %.2f\n", sumMainDiagonal);
    printf("SUMMA ELEMENTOV POBOCHNOY DIAGONALI: %.2f\n", sumSecondaryDiagonal);

    
    int matrixInt[2][2];
    int squareMatrix[2][2];

    
    printf("VVEDITE ZNACHENIE DLYA MATRICI 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrixInt[%d][%d]: ", i, j);
            scanf("%d", &matrixInt[i][j]);
        }
    }

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            squareMatrix[i][j] = 0; 
            for (int k = 0; k < 2; k++) {
                squareMatrix[i][j] += matrixInt[i][k] * matrixInt[k][j];
            }
        }
    }

    
    printf("CVADRAT MATRICI:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", squareMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}