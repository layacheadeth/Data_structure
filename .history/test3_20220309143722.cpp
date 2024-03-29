#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    
    v.assign(5,10);

    cout<<"The Vector element are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    v.push_back(15);
    int n=v.size();
    cout<<"\nThe last element is: "<<v[n-1];

    v.pop_back();

    cout<<"\nThe vector elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    v.insert(v.begin(),5);
    cout << "\nThe first element is: " << v[0];

    v.erase(v.begin());

    cout << "\nThe first element is: " << v[0];

   v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
  
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
  
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    // Swaps v1 and v2
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  



}