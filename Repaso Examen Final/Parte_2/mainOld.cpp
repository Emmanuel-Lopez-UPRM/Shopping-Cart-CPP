#include"ShoppingCart.h"

#include<iostream>
#include<string> 
using namespace std; 

int main(){ 
    ShoppingCart Cart1;
   


ItemToPurchase A, B;
string name_1, description_1; int price_1, quantity_1;
string name_2, description_2; int price_2, quantity_2;
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
Cart1.AddItem(A);
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

Cart1.AddItem(B);
string removeTest;
// cout << " Remove the item: "<< endl;
// cin >> removeTest;
// Cart1.removeItem(removeTest); 
Cart1.ModifyItem(B);
// totalCost(A,B);

return 0;
}