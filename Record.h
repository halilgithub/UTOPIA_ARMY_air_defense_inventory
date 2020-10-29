#pragma once  // This prevents the file from being included multiple times

#include <string>
#include <vector>

using namespace std;

namespace Inventory {
	const int kDefaultNumberOfItem = 1;

	class Record
	{
	public:
		Record() = default;
		Record(const string& name, const string& countryOfOrigin);

		void increaseNumberOfItem(int increaseAmount = 1);
		void decreaseNumberOfItem(int decreaseAmount = 1);
		void addToInventory();
		void addSpecification(const string& feature);
		void removeFromInventory();
		void display() const;// outputs Record info

		void setName(const string& name);
		const string& getName() const;

		void setCountryOfOrigin(const string& countryOfOrigin);
		const string& getCountryOfOrigin() const;

		void setType(const string& type);
		const string& getType() const;
		
		void setRecordNumber(int recordNumber);
		int getRecordNumber() const;

		void setNumberOfItem(int newNumberOfItem);
		int getNumberOfItem() const;

		bool isAddedToInventory() const;

	private:
		string mName;
		string mCountryOfOrigin;
		vector<string> mSpecifications;
		string mType;
		int mRecordNumber = -1;
		int mCurrentNumberOfItem = kDefaultNumberOfItem;
		bool mAddedToInventory = false;
	};
}

