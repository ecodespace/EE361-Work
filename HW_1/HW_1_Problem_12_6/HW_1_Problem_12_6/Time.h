
using namespace std;

class Time {
	public:
		Time();
		Time(int minutes, int seconds);

		int getSeconds() const;
		int getMinutes() const;
		int totalTime() const;

	private:
		int minutes_, seconds_;
	};
