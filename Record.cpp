#include <iostream>
#include "Record.h"

using namespace std;

namespace Inventory {

	Record::Record(const std::string& name, const std::string& countryOfOrigin)
		: mName(name)
		, mCountryOfOrigin(countryOfOrigin)
	{
		
	}

	void Record::increaseNumberOfItem(int increaseAmount)
	{
		setNumberOfItem(getNumberOfItem() + increaseAmount);
	}

	void Record::decreaseNumberOfItem(int decreaseAmount)
	{
		setNumberOfItem(getNumberOfItem() - decreaseAmount);
	}

	void Record::addToInventory()
	{
		mAddedToInventory = true;
	}

	void Record::removeFromInventory()
	{
		mAddedToInventory = false;
	}

	void Record::display() const
	{
		cout << "Record: " << getName() << ", " << getCountryOfOrigin() << endl;
		cout << "-------------------------" << endl;
		cout << (isAddedToInventory() ? "In Inventory" : "Not in Inventory") << endl;
		cout << "Inventory Record Number: " << getInventoryRecordNumber() << endl;
		cout << "Current Number Of Item: " << getNumberOfItem() << endl;
		cout << endl;
	}


	void Record::setName(const string& name)
	{
		mName = name;
	}

	const string& Record::getName() const
	{
		return mName;
	}

	void Record::setCountryOfOrigin(const string& countryOfOrigin)
	{
		mCountryOfOrigin = countryOfOrigin;
	}

	const string& Record::getCountryOfOrigin() const
	{
		return mCountryOfOrigin;
	}

	void Record::setInventoryRecordNumber(int inventoryRecordNumber)
	{
		mInventoryRecordNumber = inventoryRecordNumber;
	}

	int Record::getInventoryRecordNumber() const
	{
		return mInventoryRecordNumber;
	}

	void Record::setNumberOfItem(int newNumberOfItem)
	{
		mCurrentNumberOfItem = newNumberOfItem;
	}

	int Record::getNumberOfItem() const
	{
		return mCurrentNumberOfItem;
	}

	bool Record::isAddedToInventory() const
	{
		return mAddedToInventory;
	}

}
