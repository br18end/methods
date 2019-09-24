#include <stdio.h>

void bubble(int v[], int n);

void main() {
	int n, i;

	printf("Array size: ");
	scanf("%d", &n);
	
	int v[n];

	printf("Insert values\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	printf("Array\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
	bubble(v, n);
}

void bubble(int v[], int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 1; j < n; j++)	{
			if (v[j-1]>v[j])	{
				int aux = v[j-1];
				v[j-1]=v[j];
				v[j]=aux;
			}
		}
	}

	printf("Array in order\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
}