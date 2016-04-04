// Specification file array-based, sorted list (“sortedList.h”)
#include <string>
const  int  MAX_LENGTH  =  250;
//typedef std::string ItemType;
typedef int ItemType;

class SortedList { // Declares a class data type					
	public: // Public member functions
		SortedList(); // constructor
		bool IsEmpty () const;
		bool IsFull ()  const;              
		int  GetLength ()  const; // Returns length of list 
		void Insert (ItemType  item); 	
		void Delete (ItemType  item); 	
		bool IsPresent(ItemType  item)  const;
		//void SelSort ();
		void ResetIteration();
		ItemType GetPreviousItem();
		ItemType GetNextItem(); 
		ItemType GetCurrentItem();
		ItemType GetItemAt(int ix);
		bool HasNext();
	private:      // Private data members
		int length; // Number of values currently stored
		ItemType data[MAX_LENGTH]; 
		int  currentPos;  // Used in iteration       
};	
