#include <iostream>
#include "Database.h"

using namespace std;
using namespace Inventory;


int main()
{
    Database myDB;

	Record& rec1 = myDB.addRecord("Patriot", "USA");
    rec1.removeFromInventory();
    
	Record& rec2 = myDB.addRecord("S-400", "Russia");
    rec2.setNumberOfItem(2);
    
	Record& rec3 = myDB.addRecord("David Sling", "Israel");
    rec3.setNumberOfItem(9);
    rec3.increaseNumberOfItem();
    
	cout << "all records: " << endl << endl;
    myDB.displayAllRecords();
    
	cout << endl << "current records: " << endl << endl;
    myDB.displayCurrentRecords();
    
	cout << endl << "former records: " << endl << endl;
    myDB.displayFormerRecords();
    
	return 0;
}
