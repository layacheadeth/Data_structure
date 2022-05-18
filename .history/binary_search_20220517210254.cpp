#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right, int x){

     while(left<=right){
         //the reason we don't divide but perform this calculation to see the median because
         // this will let the mid stay positive, if just division, the index is likely to be negative which does not correspond to our arrays. 

         int mid = left + (right-left)/2; 

        if(arr[mid]==x){
            return mid;
        }

        else if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }

     }

     return -1;


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

    if(output==-1){
        cout<<"No match found"<<endl;
    }
    else{
        cout<<"Match found at index: "<<output<<endl;
    }

    return 0;

}