#include <stdio.h>

void multiply(int n1, int n2, int m2,  int *r, int *a, int *b);
void subtract(int n1, int n2, int *r, int *a, int *b);

int main() {
	int n1,n2,m1,m2;
	printf("Enter the size of the matrices(as continuous RxC)\n");
	printf("First array: ");
	scanf("%d%d", &n1, &n2);
	printf("Second array: ");
	scanf("%d%d", &m1, &m2);
	
	int a[n1][n2], b[m1][m2], flag;
	printf("Enter contents of first matrix: \n");
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter contents of second matrix: \n");
	for(int i=0; i<m1; i++) {
		for(int j=0; j<m2; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	printf("Choose operation:\n 1.Subtract\n 2.Multiply\n");
	scanf("%d", &flag);

	if(flag == 1) {
		int r[n1][n2];	
		if(n1 != m1 || n2 != m2) {
			printf("Invalid matrices\n");
			return 0;
		}
		subtract(n1, n2, &r[0][0], &a[0][0], &b[0][0]);
		for(int i=0; i<n1; i++) {
			for(int j=0; j<n2; j++) {
				printf("%d ", r[i][j]);
			}
			printf("\n");
		}
	}
	else {
		int r[n1][m2];
		if(m1 != n2) {
			printf("Invalid matrices\n");
			return 0;
		}
		multiply(n1, n2, m2, &r[0][0], &a[0][0], &b[0][0]);
		for(int i=0; i<n1; i++) {
			for(int j=0; j<m2; j++) {
				printf("%d ", r[i][j]);
			}
			printf("\n");
		}
	}	
	
	return 0;
}

void subtract(int n1, int n2, int *r, int *a, int *b) {
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n2; j++) {
			*((r+i*n2)+j) = *((a+i*n2)+j) - *((b+i*n2)+j); 
		}
	}
}

void multiply(int n1, int n2, int m2, int *r, int *a, int *b) {
	int s;
	for(int i=0; i<n1; i++) {
		for(int j=0; j<m2; j++) {
			*((r+i*m2)+j) = 0;
			for(int k=0; k<n2; k++) {
				*((r+i*m2)+j) += (*((a+i*n2)+k))*(*((b+j*n2)+k));
			}
		}
	}
}
