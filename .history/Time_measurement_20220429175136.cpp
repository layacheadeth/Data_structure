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

int main(){

    int arr[10000];
    int b=0;

    int search;
    
    time_t start,end;

    time(&start);

    ios_base::sync_with_stdio(false);

    // fun();

    for(int i=0;i<10000;i++){
        arr[i]=i;
    }

    cout<<"input element to saerch for: ";cin>>search;

    for(int i=0;i<10000;i++){
        if(arr[i]==search){
            cout<<"search found";
            b=1;
        }
    }

    if(b==0){
        cout<<"\nsearch not found";
    }

    time(&end);

    double time_taken = double(end-start);
    cout<<"\nTime taken by program is: "<<fixed<<time_taken<<setprecision(5);
    cout << " sec " << endl;
    return 0;




}