
public class Preference {

	private int quietTime;
	private int music;
	private int reading;
	private int chatting;
	
	public Preference(int quietTime, int music, int reading, int chatting) {
		this.quietTime = quietTime;
		this.music = music;
		this.reading = reading;
		this.chatting = chatting;
	}
	
	public int getQuietTime() {
		return quietTime;
	}
	public int getMusic() {
		return music;
	}
	public int getReading() {
		return reading;
	}
	public int getChatting() {
		return chatting;
	}
	public int compare(Preference pref) {
		int qtDiff = Math.abs(quietTime - pref.getQuietTime());
		int musicDiff = Math.abs(music - pref.getMusic());
		int readDiff = Math.abs(reading - pref.getReading());
		int chatDiff = Math.abs(chatting - pref.getChatting());
		int sumAll = (qtDiff + musicDiff + readDiff + chatDiff);
		return sumAll;
	}
}












