#include <stdio.h>
int main(void)
{
int size, i;
printf("Enter the size of the arrays:\n");
scanf("%d", &size);

int arr1[size];
printf("Enter the elements of the array:\n");
for (i = 0; i < size; i++) {
    scanf_s("%d", arr1[size]);
}
printf("The current array is:\n %d", arr1[i]);
}