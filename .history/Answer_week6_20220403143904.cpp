#include<iostream>
using namespace std;

void Menu(){
    cout<<"1. Create Order"<<endl;
    cout<<"2. Display Order"<<endl;
    cout<<"4. Delete Order"<<endl;
    cout<<"5. Update Order"<<endl;
    cout<<"6. Search Order"<<endl;
    cout<<"7. Sort Order"<<endl;
    cout<<"8. Exit"<<endl;
};

// void CreateOrder(string id, string food, int qty,double price){
//     cout<<"Id: "<<endl;cin>>id;
//     cout<<"name: "<<endl;cin>>food;
//     cout<<"qty: "<<endl;cin>>qty;
//     cout<<"price: "<<endl;cin>>price;

// };

template<typename T>
void BubbleSort(T arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}



// void swap(string *xp,string *yp){
//     string temp=*xp;
//     *xp=*yp;
//     *yp=temp;
// }

// void bubbleSort(string  arr[],int n){
//     int i,j;
//     for(i=0;i<n-1;i++){
//         for (j=0;j<n-i-1;j++){
//             if (arr[j] > arr[j+1]){
//                 swap(&arr[j], &arr[j+1]);
//             }
//         }
//     }
// }



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
            // cout<<"Display Order"<<endl;
            cout<<"Id: "<<id[i]<<endl;
            cout<<"Name: "<<food[i]<<endl;
            cout<<"Qty: "<<qty[i]<<endl;
            cout<<"Price: "<<price[i]<<endl;
        }
        };
        break;
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
        case 5:{
            string index;
            string new_id;
            string new_food;
            int new_qty;
            double new_price;
            
            cout<<"Enter ID to update element";cin>>index;
            for(int i=0;i<n;i++){
                if(id[i]==index){
                    cout<<"new_id: ";cin>>new_id;
                    cout<<"new_food: ";cin>>new_food;
                    cout<<"new_qty: ";cin>>new_qty;
                    cout<<"new_price: ";cin>>new_price;

                    id[i]=new_id;
                    food[i]=new_food;
                    qty[i]=new_qty;
                    price[i]=new_price;
                    cout<<"Update success"<<endl;
                }
            }
        };
        break;
        case 6:{

        };
        break;

        case 7:{
            // bubbleSort(id,n);
            // bubbleSort(food,n);
            // bubbleSort(qty,n);
            BubbleSort(id,n);
            BubbleSort(food,n);
            BubbleSort(qty,n);
            BubbleSort(price,n);
            


        };  
        break;


        case 8:{
            exit(0);
        }

        default:cout<<"Input valid options"<<endl;

    }
}while(1);




}