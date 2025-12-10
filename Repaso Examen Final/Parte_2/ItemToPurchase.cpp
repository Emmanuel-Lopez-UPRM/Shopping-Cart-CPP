#include"ItemToPurchase.h"



ItemToPurchase :: ItemToPurchase( string Ditemname, string DitemDescription, int DitemPrice, int DitemQuantity){ 
    itemName = Ditemname;
    itemDescription = DitemDescription;
    itemPrice =  DitemPrice;
    itemQuantity = DitemQuantity;
}
ItemToPurchase::ItemToPurchase(string Ditemname, int DitemPrice, int DitemQuantity){   
    itemName = Ditemname;
    itemPrice =  DitemPrice;
    itemQuantity = DitemQuantity; 
}
ItemToPurchase::ItemToPurchase(/* args */){
    itemName = "none"; 
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}
string ItemToPurchase ::setName(string Item_name){ 
itemName = Item_name; 
return itemName;
} 
string ItemToPurchase :: setDescription(string Item_description){
    itemDescription = Item_description;
    return itemDescription; 
}
int ItemToPurchase :: setPrice(int value){
    itemPrice = value; 
    return itemPrice;
}

int ItemToPurchase :: setQuantity(int value){ 
    itemQuantity = value; 
    return itemQuantity; 
}
string ItemToPurchase :: getName(){ 
return itemName;
}
string ItemToPurchase ::  getDescription(){ 
    return itemDescription; 
}
int ItemToPurchase :: getPrice() {
    return itemPrice;
}
int ItemToPurchase :: getQuantity(){ 
    
    return itemQuantity;
}
void PrintItemCost(ItemToPurchase &I){     
    int Itotalish;
    Itotalish = I.getQuantity() * I.getPrice();
    cout << I.getName() <<" "<<  I.getQuantity() << " @  $" << I.getPrice() <<  " = " <<"$"<<Itotalish << endl; 
}
 void  totalCost(ItemToPurchase &I, ItemToPurchase &J){ 
        cout << "TOTAL COST\n";    
            int Itotalish, Jtotalish; 
                Itotalish = I.getQuantity() * I.getPrice();
                Jtotalish = J.getQuantity()*J.getPrice(); 
                PrintItemCost(I); 
                I.PrintItemDescription();
                PrintItemCost(J); 
                J.PrintItemDescription();
        cout << "Total: $" << Itotalish + Jtotalish;

}
void ItemToPurchase :: PrintItemDescription(){ 
    cout << itemName << ": " << itemDescription << endl;
}