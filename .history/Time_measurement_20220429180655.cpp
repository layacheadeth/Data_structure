#include<iostream>
#include<ctime>
#include <iomanip>   

using namespace std;

void fun(){
    for(int i=0;i<10000;i++){
        cout<<i;
        for(int j=0;j<10000;j++){
            cout<<j;
        }
        ;
    }
}

int binarySearch(int arr[], int l, int r, int x){
    if(r>=1){
        int mid = l + (r-1)/2;

        if(arr[mid]==x)
            return mid;

        if(arr[mid]>x)
        {
            return binarySearch(arr,l,mid-1,x);
        }
        return binarySearch(arr,mid+l,r,x);
    }
    return -l;
}


int main(){

    int arr[1000000];
    int b=0;

    int search;
    
    time_t start,end;

    time(&start);

    ios_base::sync_with_stdio(false);

    // fun();

    for(int i=0;i<1000000;i++){
        arr[i]=i;
    }

    cout<<"input element to saerch for: ";cin>>search;

    for(int i=0;i<1000000;i++){
        if(arr[i]==search){
            cout<<"search found";
            b=1;
        }
    }

    if(b==0){
        cout<<"\nsearch not found";
    }

    // int result = binarySearch(arr, 0, 1000000-1, 789012);
    // (result == -1)
    //     ? cout << "Element is not present in array"
    //     : cout << "Element is present at index " << result;


    time(&end);

    double time_taken = double(end-start);
    cout<<"\nTime taken by program is: "<<fixed<<time_taken<<setprecision(5);
    cout << " sec " << endl;
    return 0;




}