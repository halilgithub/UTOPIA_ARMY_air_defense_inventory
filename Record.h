#pragma once  // This prevents the file from being included multiple times

#include <string>

namespace Inventory {
	const int DEFAULT_NUMBER_OF_ITEM = 1;

	class Record
	{
	public:
		Record() = default;
		Record(const std::string& name, const std::string& countryOfOrigin);

		void increaseNumberOfItem(int increaseAmount = 1);
		void decreaseNumberOfItem(int decreaseAmount = 1);
		void addToInventory();
		void removeFromInventory();
		void display() const;// outputs Record info

		void setName(const std::string& name);
		const std::string& getName() const;

		void setCountryOfOrigin(const std::string& countryOfOrigin);
		const std::string& getCountryOfOrigin() const;

		void setInventoryRecordNumber(int inventoryRecordNumber);
		int getInventoryRecordNumber() const;

		void setNumberOfItem(int newNumberOfItem);
		int getNumberOfItem() const;

		bool isAddedToInventory() const;

	private:
		std::string mName;
		std::string mCountryOfOrigin;
		int mInventoryRecordNumber = -1;
		int mCurrentNumberOfItem = DEFAULT_NUMBER_OF_ITEM;
		bool mAddedToInventory = false;
	};
}

