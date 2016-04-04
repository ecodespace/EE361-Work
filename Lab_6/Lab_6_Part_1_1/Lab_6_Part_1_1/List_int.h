// Specification file array-based list (“list.h”)
const  int  MAX_LENGTH_INT = 50;
typedef int   ItemType;

class  List_int	          // Declares a class data type
{
public: 	          // Public member functions

	List_int();           // constructor
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
	ItemType data[MAX_LENGTH_INT];
	int  currentPos;  // Used in iteration       
};