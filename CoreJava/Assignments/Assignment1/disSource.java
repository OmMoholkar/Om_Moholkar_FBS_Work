class Distance{
    float kilometers;
    float meters;
    void setKilometers(float km){
        this.kilometers = km;
    }
    void setMeters(float m){
        this.meters = m;
    }
    float getKilometers(){
        // System.out.println("Kilometers: " + this.kilometers);
        return this.kilometers;
    }
    float getMeters(){
        // System.out.println("Meters: " + this.meters);
        return meters;
    }
    void display(){
        System.out.println("Kilometers: " + this.kilometers);
        System.out.println("Meters: " + this.meters);
    }
}

class TestDistance{
    public static void main(String[] args) {
        Distance d1 = new Distance();
        d1.setKilometers(55);
        d1.setMeters(67);
        // d1.getKilometers();
        // d1.getMeters();
        d1.display();
    }
}