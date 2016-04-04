
class Purchase {
	public:
		Purchase();
		Purchase(float amt);

		float GetAmount() const;
		void SetAmount(float amt);

		bool operator!=(const Purchase & otherPurchase);
	private:
		float amount;
	};