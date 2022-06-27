#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iostream>
#include <iostream>

struct bucket
{
    int count;
    int* value;
};

int compareIntegers(const void* first, const void* second)
{
    int x = *((int*)first), y = *((int*)second);
    if (x == y)
    {
        return 0;
    }
    else if (x < y)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void bucketSort(int array[], int n)
{
    struct bucket buckets[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        buckets[i].count = 0;
        buckets[i].value = (int*)malloc(sizeof(int) * n);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            buckets[0].value[buckets[0].count++] = array[i];
        }
        else if (array[i] > 10)
        {
            buckets[2].value[buckets[2].count++] = array[i];
        }
        else
        {
            buckets[1].value[buckets[1].count++] = array[i];
        }
    }
    for (k = 0, i = 0; i < 3; i++)
    {
        // now using quicksort to sort the elements of buckets
        qsort(buckets[i].value, buckets[i].count, sizeof(int), &compareIntegers);
        for (j = 0; j < buckets[i].count; j++)
        {
            array[k + j] = buckets[i].value[j];
        }
        k += buckets[i].count;
        free(buckets[i].value);
    }
}

int main(char* arg[]) {

    int a[8];
    int i = 8, j, k, n;

    n = i;
   
    // Заполнение массива случайными числами
    for (int i = 0; i < 8; i++)
    {
        std::cin >> a[i]; // Вводим с клавиатуры значение ячейки массива
    }
    // Вывод элементов массива до сортировки
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);
    printf("\n");

    bucketSort(a, n);
    printf("\n After Sorting\n");
    for (k = 0; k < i; k++)
        printf("%d ", a[k]);


    return 0;
}
