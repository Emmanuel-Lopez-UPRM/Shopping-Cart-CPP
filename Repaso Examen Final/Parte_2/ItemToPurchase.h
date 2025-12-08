#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H
#include<iostream>
#include<string>

using namespace std; 
class ItemToPurchase
{
private:
    string itemName;
    string itemDescription; 
    int itemPrice;
    int itemQuantity;  
public: 
    ItemToPurchase(string , string, int, int);
    ItemToPurchase(string, int, int); 
    ItemToPurchase(); //Default Constructor
 
    string setName(string); 
    string setDescription(string);
    int setPrice(int);
    int setQuantity(int);
    string getName();
    string getDescription();
    int getPrice();
    int getQuantity();
    void totalCost(ItemToPurchase &I, ItemToPurchase &J);
    void PrintItemCost(ItemToPurchase &I);
    void PrintItemDescription(); 

};
#endif