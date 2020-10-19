#include <iostream>
#include "Record.h"

using namespace std;
using namespace Inventory;

int main()
{
	cout << "Testing the Record class." << endl;

	Record record;
	record.setName("Stinger");
	record.setCountryOfOrigin("USA");
	record.setRecordNumber(1);
	//record.setNumberOfItem(3);
	record.addToInventory();
	record.display();

	return 0;
}
