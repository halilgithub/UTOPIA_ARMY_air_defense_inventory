#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace Inventory {

	Record& Database::addRecord(const string& name,
		const string& countryOfOrigin)
	{
		Record theRecord(name, countryOfOrigin);
		theRecord.setRecordNumber(mNextRecordNumber++);
		theRecord.addToInventory();
		mRecords.push_back(theRecord);

		return mRecords[mRecords.size() - 1];
	}

	Record& Database::getRecord(int recordNumber)
	{
		for (auto& record : mRecords) {
			if (record.getRecordNumber() == recordNumber) {
				return record;
			}
		}
		throw logic_error("No record found.");
	}

	Record& Database::getRecord(const string& name, const string& countryOfOrigin)
	{
		for (auto& record : mRecords) {
			if (record.getName() == name &&
				record.getCountryOfOrigin() == countryOfOrigin) {
					return record;
			}
		}
		throw logic_error("No record found.");
	}

	void Database::displayAllRecords() const
	{
		for (const auto& record : mRecords) {
			record.display();
		}
	}

	void Database::displayCurrentRecords() const
	{
		for (const auto& record : mRecords) {
			if (record.isAddedToInventory())
				record.display();
		}
	}

	void Database::displayFormerRecords() const
	{
		for (const auto& record : mRecords) {
			if (!record.isAddedToInventory())
				record.display();
		}
	}

}
