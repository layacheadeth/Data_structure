#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i=l;//starting index of left subarray
    int j=m+1;// starting index of right subarray
    int k=1;//starting index of temporary array



}


//Merge Sort Sorting Algorithm
void MergeSort(int arr[],int l, int r){

    //if subarray has more than one element
    if(l<r){
        int m = (l+r)/2;

        MergeSort(arr,0,m);
        MergeSort(arr,m+1,r);

        merge(arr,l,m,r);
        

    }

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