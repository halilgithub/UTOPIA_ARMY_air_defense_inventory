#pragma once

#include <iostream>
#include <vector>
#include "Record.h"

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

		void displayAllRecords() const;
		void displayCurrentRecords() const;
		void displayFormerRecords() const;

	private:
		vector<Record> mRecords;
		int mNextRecordNumber = kFirstRecordNumber;
	};
}
