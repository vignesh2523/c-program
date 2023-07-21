#include <stdio.h>
void printNGE(int arr[], int n)
{
	int next, i, j;
	for (i = 0; i < n; i++) {
		next = -1;
		for (j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				next = arr[j];
				break;
			}
		}
		printf("%d --> %d\n", arr[i], next);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	printNGE(arr, n);
	return 0;
}
