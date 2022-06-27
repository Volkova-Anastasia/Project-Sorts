#ifndef __SORTS_H__ // Конструкция include guard 
#define __SORTS_H__

// Сигнатуры функций для сортировки
void bubble_sort(int *arr, size_t len, int (*cmp)(int, int));
void insertion_sort(int *arr, size_t len, int (*cmp)(int, int));
void comb_sort(int *arr, size_t len, int (*cmp)(int, int));
void shell_sort(int *arr, size_t len, int (*cmp)(int, int));

#endif // __SORTS_H__
