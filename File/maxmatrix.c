#include <stdio.h>

int main() {
    int n,m,mx;
    printf("Enter size of array: (RxC)\n");
    scanf("%d%d", &n, &m);

    int a[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
            if(i == 0 && j == 0)
                mx = a[i][j];
            if(a[i][j] > mx)
                mx = a[i][j];
        }
    }
    printf("The maximum element of the marix is %d\n", mx);
    return 0;
}