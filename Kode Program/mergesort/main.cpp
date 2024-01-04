#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void merge(int *,int, int , int );
void print_array(int arr, int size);

int size = 200000;
void merge_sort(int *arr, int low, int high){
    int mid;
    if (low < high){
        //divide the array at mid and sort independently using merge sort
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
}

void merge(int *arr, int low, int high, int mid){
    int i, j, k, c[size];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high){
        if (arr[i] < arr[j]){
            c[k] = arr[i];
            k++;
            i++;
        }
        else{
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid){
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high){
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++){
        arr[i] = c[i];
    }
}
void print_array(int arr[], int size){

    cout<< "ANGKA RANDOM";
    cout<<endl;
    int j;
    for (j=0; j<size; j++)
    cout << arr[j] << " ";
    cout << endl;
 }

int main(){
    int i;
    int max = 2000000;
    int arr[size];

    std::srand(std::time(nullptr));
    for (int &v : arr ) v = std::rand() % max + 1;
    print_array(arr, size);
    cout<<endl;

    cout<<"MERGE SORT\n\n";
    merge_sort(arr, 0, size-1);
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
