
// Exception Classes
class MonthError {};
class DayError {};
class YearError {};

class Date {
	public:
		Date();
		Date(int InitMonth, int InitDay, int InitYear);

		int GetMonth() const;
		int GetDay() const;
		int GetYear() const;

		bool operator<(const Date & otherDate) const;
		bool operator>(const Date & otherDate) const;
		bool operator==(const Date & otherDate) const;

	private:
		int month;
		int day;
		int year;

	};