#include<iostream>
using namespace std;


// [1,2,3,4,5,6,7,8]

int binarysearch(int arr[],int left,int right, int x){

     while(left<=right){
         //the reason we don't divide but perform this calculation to see the median because
         // this will let the mid stay positive, if just division, the index is likely to be negative which does not correspond to our arrays. 

         //int mid = left + (right-left)/2; 
         int mid = (right+left)/2;
    // if middle, return index found
        if(arr[mid]==x){
            return mid;
        }
// if smaller than x, move to upperhalf
        else if(arr[mid]<x){
            left=mid+1;
        }
        // else, move to lower half
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