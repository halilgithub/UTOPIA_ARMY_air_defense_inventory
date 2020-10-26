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
	
	Record& rec4 = myDB.addRecord("FIM-92 Stinger", "USA");
	rec4.setNumberOfItem(24);
	rec4.setType("Man-portable surface-to-air missile");
	rec4.addSpecification("Crew: 1-2");
	rec4.addSpecification("Mass: 15.19 kg");
	rec4.addSpecification("Engine: Solid-fuel rocket motor");
	rec4.addSpecification("Guidance System: Infrared Homing");
	rec4.addSpecification("Warhead: High Explosive annular blast fragmentation");
	rec4.addSpecification("Warhead Weight: 3 kg");
    
	cout << "all records: " << endl << endl;
    myDB.displayAllRecords();
    
	cout << endl << "current records: " << endl << endl;
    myDB.displayCurrentRecords();
    
	cout << endl << "former records: " << endl << endl;
    myDB.displayFormerRecords();
    
	return 0;
}
