#include <iostream>
#include <stdexcept>
#include "Database.h"
#include "Record.h"

using namespace std;


namespace Inventory {

	Record& Database::addRecord(const string& name,
		const string& countryOfOrigin)
	{
		Record theRecord(name, countryOfOrigin);
		theRecord.setRecordNumber(mNextRecordNumber++);
		theRecord.addToInventory();
		mMap.insert(make_pair(theRecord.getRecordNumber(),theRecord));

		return mMap.at(theRecord.getRecordNumber());
	}

	Record& Database::getRecord(int recordNumber)
	{
		return mMap.at(recordNumber);
		throw logic_error("No record found.");
	}

	Record& Database::getRecord(const string& name, const string& countryOfOrigin)
	{
		unordered_map<int,Record>::iterator p;
		for(p=mMap.begin(); p!=mMap.end(); p++)
		{
			if(p->second.getName() == name && p->second.getCountryOfOrigin() == countryOfOrigin)
				return mMap.at(p->first);
		}
		throw logic_error("No record found.");
	}

	void Database::displayAllRecords()
	{
		unordered_map<int,Record>::iterator itr;
		for(itr = mMap.begin(); itr != mMap.end(); itr++)
		{
			itr->second.display();
		}
	}

	void Database::displayCurrentRecords()
	{
		unordered_map<int,Record>::iterator itr;
		for(itr = mMap.begin(); itr != mMap.end(); itr++)
		{	
			if(itr->second.isAddedToInventory())
				itr->second.display();
		}
	}

	void Database::displayFormerRecords()
	{
		unordered_map<int,Record>::iterator itr;
		for(itr = mMap.begin(); itr != mMap.end(); itr++)
		{	
			if(!itr->second.isAddedToInventory())
				itr->second.display();
		}
	}

}
