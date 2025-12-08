#include<iostream>
#include<string> 
using namespace std; 
class ItemToPurchase
{
private:
    string itemName;
    int itemPrice;
    int itemQuantity;  
public: 
  ItemToPurchase(string, int, int); 
    ItemToPurchase(); //Default Constructor
 
    string setName(string); 
    int setPrice(int);
    int setQuantity(int);
    void getName();
    void getPrice();
    void getQuantity();
    friend void totalCost(ItemToPurchase &I, ItemToPurchase &J);
    

};
ItemToPurchase::ItemToPurchase(string Ditemname, int DitemPrice, int DitemQuantity)
{
    itemName = Ditemname;
    itemPrice =  DitemPrice;
    itemQuantity = DitemQuantity;
}
ItemToPurchase::ItemToPurchase(/* args */)
{
    itemName = "none"; 
    itemPrice = 0;
    itemQuantity = 0;
}
string ItemToPurchase ::setName(string Item_name){ 
itemName = Item_name; 
return itemName;
} 

int ItemToPurchase :: setPrice(int value){
    itemPrice = value; 
    return itemPrice;
}

int ItemToPurchase :: setQuantity(int value){ 
    itemQuantity = value; 
    return itemQuantity; 
}
void ItemToPurchase :: getName(){ 
cout << itemName; 
}
void ItemToPurchase :: getPrice(){
    cout << itemPrice;
}
void ItemToPurchase :: getQuantity(){ 
    cout << itemQuantity; 
}

 void  totalCost(ItemToPurchase &I, ItemToPurchase &J){ 
cout << "TOTAL COST\n";    
int Itotalish, Jtotalish; 
Itotalish = I.itemQuantity * I.itemPrice;
Jtotalish = J.itemQuantity*J.itemPrice; 
cout << I.itemName <<" "<<  I.itemQuantity << " @  $" << I.itemPrice <<  " = " <<"$"<<Itotalish << endl; 
   cout << J.itemName <<" "<<  J.itemQuantity << " @  $" << J.itemPrice <<  " = " <<"$"<<Jtotalish << endl; 

   cout << "Total: " << Itotalish + Jtotalish;

}
int main(){ 
ItemToPurchase A, B; 
string name_1; int price_1, quantity_1;
string name_2; int price_2, quantity_2;
cout << " Item-1" << endl;
cout << "Enter the item name: " << endl;
getline(cin, name_1);

A.setName(name_1);
cout << "Enter the item price: " << endl;
cin >> price_1; 

A.setPrice(price_1); 
cout << "Enter item quantity: "<< endl;
cin >> quantity_1;

A.setQuantity(quantity_1);
cin.ignore(); 
cout << " Item-2" << endl;
cout << "Enter the item name: " << endl;

getline(cin, name_2);

B.setName(name_2);
cout << "Enter the item price: " << endl;
cin >> price_2; 

B.setPrice(price_2); 
cout << "Enter item quantity: "<< endl;
cin >> quantity_2;

B.setQuantity(quantity_2); 
totalCost(A,B);
}