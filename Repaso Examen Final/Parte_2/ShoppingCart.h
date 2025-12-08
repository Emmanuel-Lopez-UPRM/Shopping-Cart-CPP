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
    void GetCutomerName();
    void GetDate();
    void AddItem(int value);
};

