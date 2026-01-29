#include "ShoppingCart.h"
#include <iostream> 
#include <string> 
#include <limits>
using  namespace std;

  
   void ExecuteMenu(char option, ShoppingCart& cart) {
    if (option == 'a') {
        cout << "ADD ITEM TO CART\n";
        ItemToPurchase item; 
        string name, description; 
        int price, quantity; 
        cin.ignore();
        cout << "Enter the item name: \n";
        getline(cin, name); 
        item.setName(name);
      
        cout << "Enter the item description\n"; 
        getline(cin, description); 
        item.setDescription(description);
        cout << "Enter item Price\n"; 
        cin >> price; 
        item.setPrice(price); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the item quantity\n"; 
        cin >> quantity; 
        item.setQuantity(quantity); 
        cart.AddItem(item); 
        cin.ignore(); 
        
    }
    else if (option == 'd') {
        cout << "REMOVE ITEM FROM CART\n";
       cout << "Enter Item from cart\n"; 
       string remove; 
       cin.ignore(); 
       getline(cin, remove); 
       cart.removeItem(remove);
    }
    else if (option == 'c') {
        cout << "CHANGE ITEM QUANTITY\n";
        ItemToPurchase modify; 
        cout << "Enter the item name\n"; 
        string modname;
        cin.ignore(); 
        getline(cin, modname); 
        modify.setName(modname); 
        cout << "Enter the new quantity\n"; 
        int modquant; 
        cin >> modquant; 
        modify.setQuantity(modquant);

        cart.ModifyItem(modify); 
    

    }
    else if (option == 'i') {
        cout << "OUTPUT ITEMS' DESCRIPTIONS\n";
        cart.PrintDescription(); 
    }
    else if (option == 'o') {
        cout << "OUTPUT SHOPPING CART\n";
        cart.PrintTotal();
   cout << "Total: $" << cart.GetCostOfCart() << "\n";
    }
    else if (option == 'q') {
        cout << "END\n"; 
    }
    else {
        // Esto no debería ejecutarse si validamos en main()
        cout << "Invalid option!\n"; 
    }
}


void PrintMenu(){ 


cout << "Menu\n"; 
cout << "a - Add item to cart\n"; 
cout << "d - Remove item from cart\n"; 
cout << "c - Change item quantity\n";
cout << "i - Output item's description\n";
cout << "o - Output shopping cart\n";
cout << "q - Quit\n\n"; 

cout << "Choose an option:";

}
int main(){ 
string customer_name, currentDate;
;
cout << "Enter customer's name: \n";
getline(cin,customer_name);
cout << "Enter today's date\n"; 
getline(cin, currentDate);
ShoppingCart Cart(customer_name,currentDate);

cout << "Customer name: " << Cart.GetCustomerName() << endl;
cout << "Today's date: " << Cart.GetDate() << endl;
char option;
do{
PrintMenu();  
cin >> option; 
ExecuteMenu(option, Cart); 
} while (option != 'q');
   return 0; 
}