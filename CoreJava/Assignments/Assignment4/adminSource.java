class Admin{
    int admId;
    String admName;
    double admSalary;
    double admAllowance;
    Admin(){
        this.admId = 901;
        this.admName = "Karan Kumar";
        this.admSalary = 100000;
        this.admAllowance = 45000;
    }
    Admin(int id, String name, double salary, double allowance){
        this.admId = id;
        this.admName = name;
        this.admSalary = salary;
        this.admAllowance = allowance;
    }
    void setId(int id){
        this.admId = id;
    }
    void setName(String name){
        this.admName = name;
    }
    void setSalary(double salary){
        this.admSalary = salary;
    }
    void setAllowance(double allowance){
        this.admAllowance = allowance;
    }
    int getId(){
        return this.admId;
    }
    String getName(){
        return this.admName;
    }
    double getSalary(){
        return this.admSalary;
    }
    double getAllowance(){
        return this.admAllowance;
    }
    void display(){
        System.out.println("Admin");
        System.out.println("ID: " + this.admId);
        System.out.println("Name: " + this.admName);
        System.out.println("Salary: " + this.admSalary);
        System.out.println("Allowance: " + this.admAllowance);
    }
}

class TestAdmin{
    public static void main(String[] args) {
        Admin a1 = new Admin();
        Admin a2 = new Admin(902,"Lando Norris", 120000,20000);
        a1.display();
        a2.display();
    }
}