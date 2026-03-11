class Car{
    int srNum;
    String model;
    String brand;
    double price;
    String color;
    float fuelCapacity;
    void setSrNo(int num){
        this.srNum = num;
    }
    void setModel(String model){
        this.model = model;
    }
    void setBrand(String brand){
        this.brand = brand;
    }
    void setPrice(double price){
        this.price = price;
    }
    void setColor(String color){
        this.color = color;
    }
    void setFuelCap(float cap){
        this.fuelCapacity = cap;
    }
    int getSrNo(){
        System.out.println("Serial No.: " + this.srNum);
        return this.srNum;
    }
    String getModel(){
        System.out.println("Model: " + this.model);
        return this.model;
    }
    String getBrand(){
        System.out.println("Brand: " + this.brand);
        return this.brand;
    }
    double getPrice(){
        System.out.println("Price: " + this.price);
        return this.price;
    }
    String getColor(){
        System.out.println("Color: " + this.color);
        return this.color;
    }
    float getFuelCap(){
        System.out.println("Fuel Capacity: " + this.fuelCapacity + "L");
        return this.fuelCapacity;
    }
    void display(){
        System.out.println("Serial No.: " + this.srNum);
        System.out.println("Model: " + this.model);
        System.out.println("Brand: " + this.brand);
        System.out.println("Price: " + this.price);
        System.out.println("Color: " + this.color);
        System.out.println("Fuel Capacity: " + this.fuelCapacity + "L");   
    }
}

class TestCar{
    public static void main(String[] args) {
        Car c1 = new Car();
        c1.setSrNo(216378);
        c1.setModel("M4");
        c1.setBrand("BMW");
        c1.setPrice(7256370);
        c1.setColor("Coral Blue");
        c1.setFuelCap(55.3f);
        // c1.getSrNo();
        // c1.getModel();
        // c1.getBrand();
        // c1.getPrice();
        // c1.getColor();
        // c1.getFuelCap();
        c1.display();
    }
}