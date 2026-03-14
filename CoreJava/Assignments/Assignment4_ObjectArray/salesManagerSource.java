class SalesManager{
    int id;
    String name;
    double salary, incentive, target;
    SalesManager(){
        this.id = 501;
        this.name = "Antonio Butcher";
        this.salary = 80000;
        this.incentive = 30000;
        this.target = 500000;
    }
    SalesManager(int id, String name, double salary, double inc, double tar){
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.incentive = inc;
        this.target = tar;
    }
    void setId(int id){
        this.id = id;
    }
    void setName(String name){
        this.name = name;
    }
    void setSalary(double sal){
        this.salary = sal;
    }
    void setIncentive(double inc){
        this.incentive = inc;
    }
    void setTarger(double target){
        this.target = target;
    }
    int getId(){
        return this.id;
    }
    String getName(){
        return this.name;
    }
    double getSalary(){
        return this.salary;
    }
    double getIncentive(){
        return this.incentive;
    }
    double getTarget(){
        return this.target;
    }
    void display(){
        System.out.println("\n****** Sales Manager ******");
        System.out.println("ID: " + getId());
        System.out.println("Name: " + getName());
        System.out.println("Salary: " + getSalary());
        System.out.println("Incentive: " + getIncentive());
        System.out.println("Target: " + getTarget());
    }
}

class TestSalesManager{
    public static void main(String[] args) {
        SalesManager[] sarr = new SalesManager[3];
        sarr[0] = new SalesManager();
        sarr[1] = new SalesManager(502, "Aryan Moholkar", 66000, 30000, 220000);
        sarr[2] = new SalesManager(503, "Anna Naik", 36000, 4000,70000);
        for(int i=0; i<sarr.length;i++){
            sarr[i].display();
        }
    }
}