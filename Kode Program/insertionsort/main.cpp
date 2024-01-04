#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void insertion_sort(int arr[], int size);
void print_array(int arr[],int size);

int main() {
    int b, a;
    int size = 500;
    int max = 2000000;
    int arr[size];

    std::srand(std::time(nullptr));
    for (int &v : arr ) v = std::rand() % max + 1;
    cout<<"\tINSERTION SORT\n\n";
    for(a=0; a<size; a++)
    {
        cout<<arr[a]<<endl;
    }
    insertion_sort(arr, size);
    return 0;
}

void insertion_sort(int arr[], int size) {
    int i, j ,tmp;
    for (i = 1; i < size; i++) {
    j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
    tmp = arr[j];
    arr[j] = arr[j - 1];
    arr[j - 1] = tmp;
    j--;
    }
    }
    print_array(arr, size);
 }

void print_array(int arr[], int size){

    cout<< "Pengurutan : ";
    int j;
    for (j=0; j<size; j++)
    cout <<" "<< arr[j];
    cout << endl;
 }
