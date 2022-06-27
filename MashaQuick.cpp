#include <iostream>
#include "Grafic.cpp"
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;


void QuickSort(int *ar, int start, int end){


    int left = start;
    int right = end;
    int pivot = ar[start];

    while (start < end) {

        while ((ar[end] >= pivot)&&(start < end)) {
            end--;
        }
        if (start != end) {
            ar[start] = ar[end];
            start++;
        }
        while((ar[start]<=pivot)&&(start<end)){
            start++;
        }
        if (start != end){
            ar[end] = ar[start];
            end--;
        }
    }
    ar[start] = pivot;
    pivot = start;
    start = left;
    end = right;

    if(start < pivot){
        QuickSort(ar, start, pivot-1);
    }
    if(end > pivot){
        QuickSort(ar, pivot+1, end);
    }



}

auto quiq(){



    int count;
    cout<<"Enter the size of the array: ";
    cin >> count;
    cout << "Enter the array elements: ";
    int arr[count];
    for (int i=0; i < count;i++) {
        cin >> arr[i];
    }

    vector<int> array_old;
    for(int i = 0; i<count;i++ ){
        array_old.push_back(arr[i]);
    }
    graf(count,array_old);

    system_clock::time_point start = system_clock::now();
    QuickSort(arr, 0, count-1);
    system_clock::time_point end = system_clock::now();
    duration<double> sec = end - start;
    cout << sec.count() << " sec." << endl;
    vector<int> array_new;
    for(int i = 0; i<count;i++ ){
        array_new.push_back(arr[i]);
    }
    graf(count,array_new);
    cout << "Result: ";
    for(int i=0;i<count;i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
