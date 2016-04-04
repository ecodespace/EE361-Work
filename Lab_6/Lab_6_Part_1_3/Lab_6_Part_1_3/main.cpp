
#include <iostream>
#include "List.h"
#include "Purchase.h"

using namespace std;

int main() {
	
	List<Purchase> list_p;

	Purchase purchase_1(15.68);
	Purchase purchase_2(7.33);
	Purchase purchase_3(400.20);

	Purchase purchases[] = { purchase_1,purchase_2,purchase_3 };

	for (int p = 0; p < sizeof(purchases) / sizeof(Purchase); ++p) {
		list_p.Insert(purchases[p]);
		}

	list_p.ResetList();

	cout << "List of purchases:\n";
	while (list_p.HasNext()) {
		cout << (list_p.GetNextItem()).GetAmount();
		}

	char c;
	cin >> c;

	}