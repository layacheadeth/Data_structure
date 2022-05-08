#include<iostream>
#include<ctime>
using namespace std;

void fun(){
    for(int i=0;i<100;i++){

    }
}

int main(){
    time_t start,end;

    time(&start);

    ios_base::sync_with_stdio(false);

    fun();

    time(&end);

    double time_taken = double(end-start);
    cout<<"Time taken by program is: "<<fixed<<time_taken<<setprecision(5);
    cout << " sec " << endl;
    return 0;




}