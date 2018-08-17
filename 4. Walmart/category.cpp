#include <iostream>
#include <fstream>
#include "Category.h"
#include "Vegetables.h"
using namespace std;

Category::Category(){

}


void Category::categorySelection(){
    int selection;
    Vegetables v;
    v.setName(
       
    );

    cout << "\nPlease select your product category:\n";
    cout << "1.Groceries\n2.Electronics\n3.Clothings\n" << endl;
    cout<< "Selection :";
    cin >> selection;

    if(selection == 1){

        //Add Product Types and Price
        int moneyInit = 

        cout << "You have selected groceries\n"<<endl;
        
        ofstream groceryReceipt("Grocery Receipt.txt");
        if(groceryReceipt.is_open()){

        } else {
            cout << "Grocery Receipt closed" << endl;
        }

        groceryReceipt << v.getName() << endl; ;
        groceryReceipt.close();

    } else if (selection == 2){
        cout << "You have selected Electronics" << endl;

    }
 
    
}