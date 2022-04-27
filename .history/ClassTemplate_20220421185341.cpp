#include <iostream>
using namespace std;
 
template <class T> 
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}



template <typename T>
class Array {
private:
    T* ptr;
    int size;
 
public:
    Array(T arr[], int s);
    void print();
    void sort(T a[], int n);
};

template<typename T>
void Array<T>::sort(T a[], int n)
{
for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
};
 
template <typename T> 
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
 
template <typename T> 
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}
 
int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    string ar[4]={"a","d","z","g"};
    Array<string> a1(ar,4);
    a.print();
    a1.print();
    a1.sort(ar,4);
    a1.print();
    return 0;
}