#include "ShoppingCart.h"
#include <vector>
#include<algorithm>
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
string ShoppingCart :: GetCustomerName() {

return custumerName;
}
string ShoppingCart :: GetDate(){ 
    
    return currentDate;
}
 void ShoppingCart :: AddItem(ItemToPurchase item ){
     cartItems.push_back(item);
}
void ShoppingCart :: removeItem(string item_name){ 

    for (int i = 0; i < cartItems.size(); i++)
    {
            if (cartItems[i].getName() == item_name)
            {
                cartItems.erase(cartItems.begin() + 1 );
            }else{
               cout << "Item not found in cart. Nothing removed"<< endl;
    }
    
    }

}
void ShoppingCart :: ModifyItem(ItemToPurchase item ){ 
    for (int i = 0; i < cartItems.size(); i++)
    {
        if (cartItems[i].getName() == item.getName())
        {
            // if (cartItems[i].getDescription() != "none"){

            //     cartItems[i].setDescription(item.getDescription());
            // }
            // if (cartItems[i].getPrice() != 0)
            // {
            //     cartItems[i].setPrice(item.getPrice());
            // }
            if(cartItems[i].getQuantity()!= 0){
                cartItems[i].setQuantity(item.getQuantity());
            }   
        }else{
          continue;
        }
    }   cout << "Item not fond in cart. Nothing modified\n"; 
}   
double ShoppingCart::GetNumItemsInCart(){
   double totalitem; 
   for (int i = 0; i < cartItems.size(); i++)
    {   
        totalitem+= cartItems[i].getQuantity();
    }
    return totalitem;
}
double ShoppingCart :: GetCostOfCart(){ 
        double total;
        for (int i = 0; i < cartItems.size(); i++)
        {  double totalis;
            totalis = cartItems[i].getPrice()*cartItems[i].getQuantity();
           total+=totalis;
        }
    return total; 
}

void ShoppingCart :: PrintTotal( ) {
cout << custumerName << "'s Shopping Cart - " << currentDate << endl; 
if (cartItems.empty())
    {
    cout << "Cart Is Emepty\n";
 }else{
cout << "Number of Item: " <<  GetNumItemsInCart() << endl;
    for (int i = 0; i < cartItems.size(); i++)
    {
       cout <<  cartItems[i].getName() << " "<< cartItems[i].getQuantity() << " @ $ " << cartItems[i].getPrice() << " = " <<  cartItems[i].getPrice()*cartItems[i].getQuantity()<< endl;
    }  
    } 

}
void ShoppingCart :: PrintDescription( ) { 
    cout << custumerName << "'s Shopping Cart - " << currentDate << endl << endl;

    cout << "Item Descriptiopns\n"; 
    for (size_t i = 0; i < cartItems.size(); i++)
    {
        cout << cartItems[i].getName() <<": " << cartItems[i].getDescription() << "\n";  
    }
    
    
}