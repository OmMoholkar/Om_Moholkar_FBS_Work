class Date{
    int day, month, year;
    String dow;
    Date(){ 
        System.out.println("Default Constructor Called");
        this.day = 30;
        this.month = 8;
        this.year = 2004;
        this.dow = "Monday";
    } //Default Constructor
    Date(int day, int month, int year, String dow){
        System.out.println("Parameterized Constructor Called");
        this.day = day;
        this.month = month;
        this.year = year;
        this.dow = dow;
    } // Parameterized Constructor 
    void setDay(int day){
        this.day = day;
    }
    void setMonth(int month){
        this.month = month;
    }
    void setYear(int year){
        this.year = year;
    }
    void setDow(String dow){
        this.dow = dow;
    }
    int getDay(){
        return this.day;
    }
    int getMonth(){
        return this.month;
    }
    int getYear(){
        return this.year;
    }
    String getDow(){
        return this.dow;
    }
    void display(){
        System.out.printf("%d/%d/%d %s\n", this.day, this.month, this.year, this.dow);
    }
}

class TestDate{
    public static void main(String[] args) {
        Date d1 = new Date();
        d1.display();
        Date d2 = new Date(21,2,2008,"Wednesday");
        d2.display();

        Date[] darr = new Date[3];
        darr[0] = new Date();
        darr[1] = new Date(13,3,2026,"Friday");
        darr[2] = new Date(14,3,2026,"Saturday");
        for(int i=0; i<darr.length; i++){
            // System.out.println(darr[i]);
            darr[i].display();
        }
    }
}