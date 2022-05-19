#include<iostream>
using namespace std;

void selectionSort(int arr[]){

}


int main(){
    int myarr[0];
    cout<<"Enter S integers in random order: "<<endl;
    for(int i=0;i<5;i++){
        cin>>myarr[i];
    }

    cout<<"Unsorted Array: "<<endl;

    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }
    cout<<endl;
    selectionSort(myarr);

    


    return 0;
}