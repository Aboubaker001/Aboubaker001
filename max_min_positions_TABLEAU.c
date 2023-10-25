#include <stdio.h>

void findMaxMin(int arr[], int size, int* maxVal, int* minVal, int* maxPos, int* minPos) {
    *maxVal = arr[0];
    *minVal = arr[0];
    *maxPos = 0;
    *minPos = 0;
int i;
do{
            	printf("Donnez la demontion de la Tableau\n N=");
            	scanf("%d",&size);
			}while((size<=0)||(size>50));
			
			printf("Enter le Tableau\n");
			for(i=0;i<size;i++){
				printf("T[%d]=",i);
				scanf("%d",&arr[i]);
			}
			
    for ( i = 1; i < size; i++) {
        if (arr[i] > *maxVal) {
            *maxVal = arr[i];
            *maxPos = i;
        }

        if (arr[i] < *minVal) {
            *minVal = arr[i];
            *minPos = i;
        }
    }
}

int main() {
    int SIZE,numbers[SIZE];
    int maxVal, minVal, maxPos, minPos;

    findMaxMin(numbers, SIZE, &maxVal, &minVal, &maxPos, &minPos);

    printf("Maximum value: %d\n", maxVal);
    printf("Minimum value: %d\n", minVal);
    printf("Position of maximum value: %d\n", maxPos);
    printf("Position of minimum value: %d\n", minPos);

    return 0;
}

