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
	
	void Record::addFeature(const string& feature)
	{
		mFeatures.push_back(std::string(feature));
	}

	void Record::removeFromInventory()
	{
		mAddedToInventory = false;
	}

	void Record::display() const
	{
		cout << getName() << ", " << getCountryOfOrigin() << endl;
		cout << "-------------------------" << endl;
		cout << "Type: " << getType() << endl;
		cout << "Status: " << (isAddedToInventory() ? "In Inventory" : "Not in Inventory") << endl;
		cout << "Inventory Record Number: " << getRecordNumber() << endl;
		cout << "Current Number Of Item: " << getNumberOfItem() << endl;
		cout << "Features: " << endl;
		for (const string& feature : mFeatures) {
			cout << "\t" << feature << endl;
		}
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
	
	void Record::setType(const string& type)
	{
		mType = type;
	}

	const string& Record::getType() const
	{
		return mType;
	}
	
	void Record::setRecordNumber(int recordNumber)
	{
		mRecordNumber = recordNumber;
	}

	int Record::getRecordNumber() const
	{
		return mRecordNumber;
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
