class HR{
    int hrId;
    String hrName;
    double hrSalary;
    double hrCommission;
    HR(){
        this.hrId = 101;
        this.hrName = "Rohit Mane";
        this.hrSalary = 55000;
        this.hrCommission = 10000;
    }
    HR(int id, String name, double salary, double commission){
        this.hrId = id;
        this.hrName = name;
        this.hrSalary = salary;
        this.hrCommission = commission;
    }
    void setId(int id){
        this.hrId = id;
    }
    void setName(String name){
        this.hrName = name;
    }
    void setSalary(double salary){
        this.hrSalary = salary;
    }
    void setAllowance(double commission){
        this.hrCommission = commission;
    }
    int getId(){
        return this.hrId;
    }
    String getName(){
        return this.hrName;
    }
    double getSalary(){
        return this.hrSalary;
    }
    double getAllowance(){
        return this.hrCommission;
    }
    void display(){
        System.out.println("HR");
        System.out.println("ID: " + this.hrId);
        System.out.println("Name: " + this.hrName);
        System.out.println("Salary: " + this.hrSalary);
        System.out.println("Commission: " + this.hrCommission);
    }
}

class TestHR{
    public static void main(String[] args) {
        HR h1 = new HR();
        HR h2 = new HR(102,"Oscar Piastri",50000,2000);
        h1.display();
        h2.display();
    }
}