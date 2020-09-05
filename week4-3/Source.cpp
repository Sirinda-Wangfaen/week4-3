#include<stdio.h>

int main() {
	int i, j, row;
	scanf_s("%d", &row);
	if (row > 0) {
		for (i = 0; i < row; i++)
		{
			for (j = row - (i + 1); j > 0; j--)
			{
				printf(" ");
			}
			for (j = 0; j <= i; j++)
			{
				if (j == 0 or j == i) {
					printf("* ");
				}
				else printf("  ");
			}
			printf("\n");
		}
		for (i = 0; i < row - 1; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				printf(" ");
			}
			for (j = row - i; j >= 2; j--)
			{
				if (j == row - i or j == 2) {
					printf("* ");
				}
				else printf("  ");
			}
			printf("\n");
		}
	}
	else {
		printf("Error");
	}
}