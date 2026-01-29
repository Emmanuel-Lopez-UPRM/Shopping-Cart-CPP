#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include<iostream>
#include"ItemToPurchase.h"
#include<vector>
using namespace std;
class ShoppingCart
{
private:
    string custumerName;
    string currentDate;
   vector <ItemToPurchase> cartItems;
public:
    ShoppingCart(string,string);
    ShoppingCart();
    ~ShoppingCart();
    string GetCustomerName();
    string GetDate();
    void AddItem(ItemToPurchase);
    void removeItem(string);
    void ModifyItem(ItemToPurchase);
    double GetNumItemsInCart();
    double GetCostOfCart(); 
    void PrintTotal();
    void PrintDescription(); 
};
#endif
