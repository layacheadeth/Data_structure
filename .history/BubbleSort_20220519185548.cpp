#include <iostream>
using namespace std;

void swap1(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;


}
void swap2(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// i
//      j  j+1               j   j+1         j    j+1
//[123,456,12,23]///[123,12,456,23]// [12,23,123,456]
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap2(arr[j], arr[j + 1]);
    // printArray(arr, 5);
}
 
// Function to print an array

 
// Driver code
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}