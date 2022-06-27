#include "test_sorts.h" // Добавляем  файл test_sort.h

int main(void) // Основная функция, откуда начинается исполнение программы
{
    test_bubble_sort(); // Тестирует сортировку пузырьком
    test_insertion_sort(); // Тестирует сортировку вставкой
    test_comb_sort(); // Тестирует сортировку расческой
    test_shell_sort(); // Тестирует сортировку шелла

    return 0; // Возвращаем успешный код возврата
}