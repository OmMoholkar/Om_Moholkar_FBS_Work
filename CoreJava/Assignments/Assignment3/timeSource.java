class Time{
    int hrs,mins,secs;
    Time(int hrs, int mins, int secs){
        this.hrs = hrs;
        this.mins = mins;
        this.secs = secs;
    }
    void setHrs(int hrs){
        this.hrs = hrs;
    }
    void setMins(int mins){
        this.mins = mins;
    }
    void setSecs(int secs){
        this.secs = secs;
    }
    int getHrs(){
        return this.hrs;
    }
    int getMins(){
        return this.mins;
    }
    int getSecs(){
        return this.secs;
    }
    void add(Time t){

        //My Logic
        // int cMin=0, cHrs=0;

        // int totalSecs = this.secs + t.getSecs();
        // cmin = totalSecs / 60;
        // setSecs(totalSecs % 60);

        // int totalMins = this.mins + t.getMins() + cMin;
        // cHrs = totalMins / 60;
        // setMins(totalMins % 60);

        // setHrs((this.hrs + t.getHrs() + cHrs) % 24);

        //GPT Logic 
        int total1 = this.hrs*3600 + this.mins*60 + this.secs;
        int total2 = t.getHrs()*3600 + t.getMins()*60 + t.getSecs();

        int total = total1 + total2;

        this.hrs = (total / 3600) % 24;
        this.mins = (total % 3600) / 60;
        this.secs = total % 60;
    }
}