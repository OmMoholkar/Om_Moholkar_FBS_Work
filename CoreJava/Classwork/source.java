class Date{
	int day, month, year;
	String dow;
	void setDay(int d){
		this.day = d;
	}
	void setMonth(int m){
		this.month = m;
	}
	void setYear(int y){
		this.year = y;
	}
	void setDOW(String dow){
		this.dow = dow;
	}
}

class Test{
	public static void main(String[] args){
		Date d1 //Reference
		d1 = new Date(); //Object
		System.out.println(d1);
		Date d2 = new Date();
		System.out.println(d2);
		System.out.printf("\n%d/%d/%d DOW: %s",d1.day,d1.month,d1.year,d1.dow);
		d1.day = 9;
		d1.month = 3;
		d1.year = 2026;
		d1.dow = "Monday";
		System.out.printf("\n%d/%d/%d DOW: %s",d1.day,d1.month,d1.year,d1.dow);
		d2.setDay(10);
		d2.setMonth(3);
		d2.setYear(2026);
		d2.setDOW("Tuesday");
		System.out.printf("\n%d/%d/%d DOW: %s",d2.day,d2.month,d2.year,d2.dow);
	}
}