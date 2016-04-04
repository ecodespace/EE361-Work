// Specification file array-based list (“list.h”)
const  int  MAX_LENGTH = 50;

template<class ItemType>
class  List	{         // Declares a class data type
	public: 	          // Public member functions

		List();           // constructor
		bool IsEmpty() const;
		bool IsFull()  const;
		int  GetLength()  const; // Returns length of list 
		void Insert(const ItemType & item);
		void Delete(const ItemType & item);
		bool IsPresent(const ItemType & item)  const;

		void Sort(); // Sorts the list in ascending order

		void ResetList();
		ItemType GetNextItem();
		bool HasNext();

	private:      // Private data members
		int length; // Number of values currently stored
		ItemType data[MAX_LENGTH];
		int  currentPos;  // Used in iteration       
	};