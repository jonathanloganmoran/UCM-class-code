
public class Student {

	private String name;
	private char gender;
	private Date birthDay;
	private Preference pref;
	private boolean matched;
	
	public Student(String name, char gender, Date birthDay, Preference pref) {
		this.name = name;
		this.gender = gender;
		this.birthDay = birthDay;
		this.pref = pref;
		matched = false;
	}
	public String getName() {
		return name;
	}
	public char getGender() {
		return gender;
	}
	public Date getBirthDay() {
		return birthDay;
	}
	public Preference getPref() {
		return pref;
	}
	public boolean getMatched() {
		return matched;
	}
	public boolean setMatched(boolean matched) {
		this.matched = matched;
		return matched;
	}
	public int compare(Student st) {
		if (st.getGender() != gender) {
			return 0;
		}
		Preference prefSt = st.getPref();
		Date dateSt = st.getBirthDay();
		int score = Math.abs((40 - prefSt.compare(pref)) + (60 - dateSt.compare(birthDay)));
		if (score > 100) {
			return 100;
		}
		return score;
	}
	
}
	
