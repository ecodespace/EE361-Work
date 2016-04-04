
#include <string.h>

enum class Type : char {HOME,OFFICE,FAX,CELL,PAGER};

class phoneNumber {
	public:
		phoneNumber();
		phoneNumber(int countryCode, int areaCode, int phoneNum, Type type);

		int getCountryCode();
		int getAreaCode();
		int getPhoneNum();
		Type getPhoneType();

		void setCountryCode(int countryCode);
		void setAreaCode(int areaCode);
		void setPhoneNum(int phoneNum);
		void setPhoneType(Type type);

	private:

		int countryCode_, areaCode_, phoneNum_;
		Type type_;

	};