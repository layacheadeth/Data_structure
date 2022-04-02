#include<iostream>
using namespace std;

void Menu(){
    cout<<"1. Create Order"<<endl;
    cout<<"2. Display Order"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"4. Delete Order"<<endl;
    cout<<"5. Update Order"<<endl;
    cout<<"6. Search Order"<<endl;
    cout<<"7. Sort Order"<<endl;
};

// void CreateOrder(string id, string food, int qty,double price){
//     cout<<"Id: "<<endl;cin>>id;
//     cout<<"name: "<<endl;cin>>food;
//     cout<<"qty: "<<endl;cin>>qty;
//     cout<<"price: "<<endl;cin>>price;

// };



int main(){
    int choice;
    string id[20],food[20];
    int qty[20];
    double price[20];
    int n;
    // Menu();
    
do{
    Menu();
    cout<<"Choose one: ";cin>>choice;
    switch(choice){
        case 1:{
            cout<<"Item to input: ";cin>>n;
            for (int i=0;i<n;i++){
            cout<<"Id: "<<endl;cin>>id[i];
            cout<<"name: "<<endl;cin>>food[i];
            cout<<"qty: "<<endl;cin>>qty[i];
            cout<<"price: "<<endl;cin>>price[i];
            }
        };
        break;
        case 2:{
            for(int i=0;i<n;i++){
            cout<<"Display Order"<<endl;
            cout<<"Id: "<<id[i]<<endl;
            cout<<"Name: "<<food[i]<<endl;
            cout<<"Qty: "<<qty[i]<<endl;
            cout<<"Price: "<<price[i]<<endl;
        }
        };
        break;
        case 3:{
            exit(0);
        }
        break;
        case 4:{
            string del_el;
            cout<<"enter id to delete";cin>>del_el;
            for(int i=0;i<n;i++){
                if(id[i]==del_el){
                    for(int j=i;j<(n-1);j++){
                        id[i]=id[i+1];
                        food[i]=food[i+1];
                        qty[i]=qty[i+1];
                        price[i]=price[i+1];
                    i--;
                    n--;
                    cout<<"Delete success"<<endl;
                    }           
                }
            }
        };
        break;

        default:cout<<"Input valid options"<<endl;

    }
}while(1);




}