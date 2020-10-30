#pragma once

#include <iostream>
#include <unordered_map>
#include "Record.h"

using namespace std;


namespace Inventory {
	const int kFirstRecordNumber = 1000;

	class Database
	{
	public:
		Record& addRecord(const string& name,
							  const string& countryOfOrigin);
		Record& getRecord(int recordNumber);
		Record& getRecord(const string& name,
							  const string& countryOfOrigin);

		void displayAllRecords();
		void displayCurrentRecords();
		void displayFormerRecords();

	private:
		unordered_map<int,Record> mMap;
		int mNextRecordNumber = kFirstRecordNumber;
	};
}
