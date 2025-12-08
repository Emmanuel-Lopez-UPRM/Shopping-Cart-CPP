#include "ShoppingCart.h"
#include <vector>

ShoppingCart::ShoppingCart(string Name, string Date)
{
    custumerName = Name;
    currentDate = Date;
}
ShoppingCart ::ShoppingCart(){ 
 custumerName = "none";
 currentDate = "December 17,2021";
}
ShoppingCart::~ShoppingCart()
{
}
void ShoppingCart :: GetCutomerName() {
cout << custumerName;
}
void ShoppingCart :: GetDate(){ 
    cout << currentDate; 
}
 void ShoppingCart :: AddItem(int value){
    for (int i = 0; i<value; i++ ){ 
     cartItems[i];
    }
}