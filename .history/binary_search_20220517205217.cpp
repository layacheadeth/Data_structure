#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right, int x){

}

int main(){
    int num;
    int myarr[10];
    int output;

    cout<<"Enter 10 integers in Ascending order: "<<endl;
    for(int i=0;i<10;i++){
        cin>>myarr[i];
    }

    cout<<"Enter one number that you want to search in the Array: "<<endl;
    cin>>num;

    output=binarysearch(myarr,0,9,num);

    return 0;

}