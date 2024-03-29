#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define SIZE 15
using namespace std;

// Метод восходящего слияния

void mergeSort(int* a, int n)
{
    int step = 1;  // шаг разбиения последовательности
    int* temp = (int*)malloc(n * sizeof(int)); // дополнительный массив
    while (step < n)  // пока шаг меньше длины массива
    {
        int index = 0;    // индекс результирующего массива
        int l = 0;      // левая граница участка
        int m = l + step;  // середина участка
        int r = l + step * 2;  // правая граница участка
        do
        {
            if (m < n){
                m = n;
            }
            if (r<n){
                r = n;
            }  // сортируемый участок не выходит за границы последовательности
            int i1 = l, i2 = m; // индексы сравниваемых элементов
            while (i1 < m && i2 < r) // пока i1 не дошёл до середины и i2 не дошёл до конца
            {
                if (a[i1] < a[i2]) { temp[index++] = a[i1++]; } // заполняем участок результирующей последовательности
                else { temp[index++] = a[i2++]; }
            }
            // Или i1 < m или i2 < r - только один из операторов while может выполниться
            while (i1 < m) temp[index++] = a[i1++]; // заносим оставшиеся элементы сортируемых участков
            while (i2 < r) temp[index++] = a[i2++]; // в результирующий массив
            l += step * 2; // перемещаемся на следующий сортируемый участок
            m += step * 2;
            r += step * 2;
        } while (l < n); // пока левая граница сортируемого участка - в пределах последоватльности
        for (int i = 0; i < n; i++) // переносим сформированный массив обратно в a
            a[i] = temp[i];
        step *= 2; // увеличиваем в 2 раза шаг разбиения
    }
}


int main()
{
    std::cout <<"\nInsert number of numbers"<< std::endl;
    int count;
    std::cin >> count;
    int a[count];
    int = count, j, k, n;
    
    n = i;
    
    // Заполнение массива случайными числами
    std::cout << "insert numbers"<< std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> a[i]; // Вводим с клавиатуры значение ячейки массива
    }
    // Вывод элементов массива до сортировки
    for (int i = 0; i < count; i++)
        printf("%d ", a[i]);
    printf("\n");
    mergeSort(a, n); // вызов функции сортировки
    // Вывод элементов массива после сортировки
    for (int k = 0; k < i; k++)
        printf("%d ", a[k]);
    return 0;
}
