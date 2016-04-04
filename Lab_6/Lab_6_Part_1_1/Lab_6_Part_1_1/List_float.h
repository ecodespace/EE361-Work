// Specification file array-based list (“list.h”)

const  int  MAX_LENGTH_FLOAT = 50;
typedef int   ItemType;

class  List_float {	          // Declares a class data type
	public: 	          // Public member functions

		List_float();           // constructor
		bool IsEmpty() const;
		bool IsFull()  const;
		int  GetLength()  const; // Returns length of list 
		void Insert(ItemType  item);
		void Delete(ItemType  item);
		bool IsPresent(ItemType  item)  const;

		void Sort(); // Sorts the list in ascending order

		void ResetList();
		ItemType GetNextItem();
		bool HasNext();

	private:      // Private data members
		int length; // Number of values currently stored
		ItemType data[MAX_LENGTH_FLOAT];
		int  currentPos;  // Used in iteration       
	};