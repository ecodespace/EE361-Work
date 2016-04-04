// Specification file array-based, sorted list (“sortedList.h”)
// todo 1 
const  int  MAX_LENGTH  =  500;
typedef int ItemType;

class  SortedList	          // Declares a class data type
{						
public: 	          // Public member functions

    SortedList();           // constructor
    bool IsEmpty () const;
    bool IsFull ()  const;              
    int  GetLength ()  const; // Returns length of list 
    void Insert (ItemType  item); 	
    void Delete (ItemType  item); 	
    bool IsPresent(ItemType  item)  const;
    void ResetList();
    ItemType GetNextItem ();  
    bool HasNext();

private:
    void BinarySearch(ItemType item, bool & found, int & position) const;

private:      // Private data members
    int length; // Number of values currently stored
    ItemType data[MAX_LENGTH]; 
    int  currentPos;  // Used in iteration       
};	
