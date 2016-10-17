//Header file for Time class
class Time {
	private:
		int hour;
		int minutes;
		int seconds;

	public:
		Time();
		Time(int hr, int min, int sec);
		~Time();
		int getHour() {return hour;};
		int getMinutes() {return minutes;};
		int getSeconds() {return seconds;};
		void setHour(int hr);
		void setMinutes(int min);
		void setSeconds(int sec);
};

