#pragma once  // This prevents the file from being included multiple times

#include <string>
#include <vector>

namespace Inventory {
	const int kDefaultNumberOfItem = 1;

	class Record
	{
	public:
		Record() = default;
		Record(const std::string& name, const std::string& countryOfOrigin);

		void increaseNumberOfItem(int increaseAmount = 1);
		void decreaseNumberOfItem(int decreaseAmount = 1);
		void addToInventory();
		void addSpecification(const std::string& feature);
		void removeFromInventory();
		void display() const;// outputs Record info

		void setName(const std::string& name);
		const std::string& getName() const;

		void setCountryOfOrigin(const std::string& countryOfOrigin);
		const std::string& getCountryOfOrigin() const;

		void setType(const std::string& type);
		const std::string& getType() const;
		
		void setRecordNumber(int recordNumber);
		int getRecordNumber() const;

		void setNumberOfItem(int newNumberOfItem);
		int getNumberOfItem() const;

		bool isAddedToInventory() const;

	private:
		std::string mName;
		std::string mCountryOfOrigin;
		std::vector<std::string> mSpecifications;
		std::string mType;
		int mRecordNumber = -1;
		int mCurrentNumberOfItem = kDefaultNumberOfItem;
		bool mAddedToInventory = false;
	};
}

