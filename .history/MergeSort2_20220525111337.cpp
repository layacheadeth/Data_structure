#include<iostream>
using namespace std;

//Merge Sort Sorting Algorithm
void MergeSort(int arr[],int l, int r){

}


int main(){
    int arr[5] = {4,6,1,2,7};
    int arr1[5];
    for(int i=0;i<5;i++){
        cin>>arr1[i];
    }

    cout<<"Before Merge Sort: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }

    MergeSort(arr1,0,4);

    cout<<"After Merge Sort: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    


    return 0;
}