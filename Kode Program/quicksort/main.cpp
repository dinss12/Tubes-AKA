#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;
void quick_sort(int arr[], int left, int right)
{
    int i = left, j = right; int tmp;
    int pivot = arr[(left+right)/2];
    while (i<j){
    while (arr[i] < pivot)
    i++;
    while (arr[j] > pivot)
    j--;
    if (i<=j){
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;j--;
        };
};
      if (left < j)
            quick_sort(arr, left, j);
      if (i < right)
            quick_sort(arr, i, right);
}
int main()
{
    int i, n ;
    int size = 2000000;
    int max = 2000000;
    int data[size];

    std::srand(std::time(nullptr));
    for (int &v : data ) v = std::rand() % max + 1;

        for(i=0;i<size;i++) {
    }   cout<<"\nData sebelum diurutkan: "<<endl;
        for(i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
        cout<<"\n";
        quick_sort(data,0,size-1);//hasil pengurutan
        cout<<"\nHasil pengurutan:\n";
    {
    int i;
    for (i=0;i<size;i++)
        cout<<data[i]<<" ";
        cout<<"\n";
    }
}
