#include<iostream>
using namespace std;

void Menu(){
    cout<<"1. Create Order"<<endl;
    cout<<"2. Display Order"<<endl;
    cout<<"3. Delete Order"<<endl;
    cout<<"4. Update Order"<<endl;
    cout<<"5. Search Order"<<endl;
    cout<<"6. Sort Order"<<endl;
};

// void CreateOrder(string id, string food, int qty,double price){
//     cout<<"Id: "<<endl;cin>>id;
//     cout<<"name: "<<endl;cin>>food;
//     cout<<"qty: "<<endl;cin>>qty;
//     cout<<"price: "<<endl;cin>>price;

// };



int main(){
    int choice;
    string id,food;
    int qty;
    double price;
    // Menu();
    
do{
    Menu();
    cout<<"Choose one: ";cin>>choice;
    switch(choice){
        case 1:{
            cout<<"Id: "<<endl;cin>>id;
            cout<<"name: "<<endl;cin>>food;
            cout<<"qty: "<<endl;cin>>qty;
            cout<<"price: "<<endl;cin>>price;
        };
        break;
        case 2:{
            cout<<"Display Order"<<endl;
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<food<<endl;
            cout<<"Qty: "<<qty<<endl;
            cout<<"Price: "<<price<<endl;
        };
        break;
        case 3:{
            exit(0);
        }
        break;

    }
}while(1);




}