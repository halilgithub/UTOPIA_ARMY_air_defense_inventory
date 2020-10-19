#pragma once

#include <iostream>
#include <vector>
#include "Record.h"

namespace Inventory {
	const int kFirstRecordNumber = 1000;

	class Database
	{
	public:
		Record& addRecord(const std::string& name,
							  const std::string& countryOfOrigin);
		Record& getRecord(int recordNumber);
		Record& getRecord(const std::string& name,
							  const std::string& countryOfOrigin);

		void displayAllRecords() const;
		void displayCurrentRecords() const;
		void displayFormerRecords() const;

	private:
		std::vector<Record> mRecords;
		int mNextRecordNumber = kFirstRecordNumber;
	};
}
