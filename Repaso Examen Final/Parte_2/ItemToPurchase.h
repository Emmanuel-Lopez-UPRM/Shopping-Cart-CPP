//Emmanuel López Bonet - UPRM 
//Archivo Header para el Examen Final - Introducion a Programacion II. 
// Este archivo contiene todo los prototipos necesarios y la clase con sus variables privadas. 
// ifdef para evitar que se defina multiple veces, si ya esta añadido en un programa. 
#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H
#include<iostream>
#include<string>

using namespace std; 
// La Clase con sus variables privadads y sus funciones prototipo 
class ItemToPurchase
{
private:
    string itemName;
    string itemDescription; 
    int itemPrice;
    int itemQuantity;  
public: 
//Prototipo de funciones. 
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
