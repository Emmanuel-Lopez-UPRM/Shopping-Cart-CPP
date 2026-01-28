//Emmanuel Lopez Bonet - UPRM
//Examen Final - Comp3110 - Indtroducion a programacion II.
//Archivo de implementacion - definiciones de funciones a usar.
#include"ItemToPurchase.h"


//Constructor por defecto con parametros como , Nombre del articulo, precio, Cantiddad.
ItemToPurchase :: ItemToPurchase( string Ditemname, string DitemDescription, int DitemPrice, int DitemQuantity){ 
    itemName = Ditemname;
    itemDescription = DitemDescription;
    itemPrice =  DitemPrice;
    itemQuantity = DitemQuantity;
} 
// Constructor por defecto con parametros como Nombre del articulo, Precio y Cantidad.
ItemToPurchase::ItemToPurchase(string Ditemname, int DitemPrice, int DitemQuantity){   
    itemName = Ditemname;
    itemPrice =  DitemPrice;
    itemQuantity = DitemQuantity;
}
//Constructor Por Defecto sin argumentos. 
ItemToPurchase::ItemToPurchase(/* args */){
    itemName = "none"; 
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}
//Setter para el nombre. 
string ItemToPurchase ::setName(string Item_name){ 
itemName = Item_name; 
return itemName;
} 
// Setter para la descripcion del articulo.
string ItemToPurchase :: setDescription(string Item_description){
    itemDescription = Item_description;
    return itemDescription; 
}
// Setter para el precio del articulo. 
int ItemToPurchase :: setPrice(int value){
    itemPrice = value; 
    return itemPrice;
}
// Setter para la cantidad de articulos.
int ItemToPurchase :: setQuantity(int value){ 
    
    return itemQuantity; 
}
//Getters se usaran para retornar lo que este almazenado en la variable privada de la class "ItemToPurchase. 
string ItemToPurchase :: getName(){ 
return itemName;
} 
string ItemToPurchase ::  getDescription(){ 
    return itemDescription; 
}
int ItemToPurchase :: getPrice(){
    return itemPrice;
}
int ItemToPurchase :: getQuantity(){ 
    
    return itemQuantity;
}
// La Funcion toma como parametro un objeto I pasado por referencia para evitar copias de otro objeto. 
void PrintItemCost(ItemToPurchase &I){     
    int Itotalish;
    Itotalish = I.getQuantity() * I.getPrice();
    cout << I.getName() <<" "<<  I.getQuantity() << " @  $" << I.getPrice() <<  " = " <<"$"<<Itotalish << endl; 
}// Total cost va a sumar el costo de los articulos del carro y simplemente imprime un total, creando dos objetos pasado por referencia. 
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

} // La funcion solo imprime el nombre del articulo y la descripcion al lado. 
void ItemToPurchase :: PrintItemDescription(){ 
    cout << itemName << ": " << itemDescription << endl;
}
