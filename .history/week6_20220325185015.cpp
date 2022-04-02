#include<iostream>
using namespace std;

class Food {
    public:
    string type,name;
    int amount;
    double price;
    bool deliever;

    void Instock(){
        cout<<"In Stock"<<endl;

    }
    bool isDelieverable(){
        return deliever;
    }

    string getIngredient(string ingredient){
        return ingredient;
    }

    double getPrice_added(double price_added){
        return price_added;
    }

    void AdditionalIngredient(string ingredient_added,double price_added ){
    cout<<"Input ingredient"<<endl;cin>>ingredient_added;
    cout<<"Input price"<<endl;cin>>price_added;

        
    }


};




int main(){
    string ingredient_added;
    double price_added;
    Food f1;



}