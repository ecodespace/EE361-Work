#include "Purchase.h"

Purchase::Purchase() {
	amount = 0;
	}

Purchase::Purchase(float amt) {
	amount = amt;
	}

float Purchase::GetAmount() const {
	return amount;
	}

void Purchase::SetAmount(float amt) {
	amount = amt;
	}

bool Purchase::operator!=(const Purchase & otherPurchase) {
	if (this->GetAmount() == otherPurchase.GetAmount()) {
		return true;
		}

	return false;
	}