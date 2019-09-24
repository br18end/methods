#include <stdio.h>

void merge(int v[], int n);
void submerge(int v[], int L[], int R[], int n, int m1, int m2);

void main() {
	int n, i;

	printf("Array size ");
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

	merge(v, n);
}

void merge(int v[], int n) {
	int i;
	
	if (n > 1) {
		int m1 = n/2;
		int m2 = n - m1;
		int L[m1];
		int R[m2];

		for (i = 0; i < n; i++)	{
			if (i < m1) {
				L[i] = v[i];
			}
			else {
				R[i-m1] = v[i];	
			}
		}

		merge(L, m1);
		merge(R, m2);
		submerge(v,L,R,n,m1,m2);

		printf("Array in order\n");
		for (i = 0; i < n; i++) {
			printf("%d\n", v[i]);
		}
	}
}

void submerge(int v[], int L[], int R[], int n, int m1, int m2) {
	int i = 0;
	int j = 0;

	while(i < m1 || j < m2) {
		if (i < m1 && j < m2) {
			if (L[i] <= R[j]) {
				v[i+j] = L[i];
				i++;
			}
			else {
				v[i+j] = R[j];
				j++;
			}
		}
		else if(i < m1) {
			v[i+j] = L[i];
			i++;
		} 
		else if(j < m2) {
			v[i+j] = R[j];
			j++;
		}
	}
}