#include <stdio.h>

int main() {
	double matrix3[3][3];
	double maindiagonal = 0.0, sidediagonal = 0.0;
	printf("input elements 3x3:\n");
	for (int i =0; i < 3; i++) {
		for (int j = 0; j <3; j++) {
			scanf("%lf", &matrix3[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		maindiagonal += matrix3[i][i];
		sidediagonal += matrix3[i][2-i];
	}
	printf("main diagonal %.2lf\n", maindiagonal);
	printf("side diagonal %.lf\n", sidediagonal);

	int matrix2[2][2];
	int result[2][2]={0};
	printf("input elements 2x2:\n)");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				result[i][j] += matrix2[i][k] * matrix2[k][j];
			}
		}
	}
	printf("square of :\n");
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
