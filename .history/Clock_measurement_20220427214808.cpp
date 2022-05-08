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
    // time_t start,end;
    clock_t start, end;

    start=clock();

    // time(&start);

    // ios_base::sync_with_stdio(false);

    fun();

    // time(&end);
    end=clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    // double time_taken = double(end-start);
    // cout<<"\nTime taken by program is: "<<fixed<<time_taken<<setprecision(5);
    // cout << " sec " << endl;
    return 0;




}