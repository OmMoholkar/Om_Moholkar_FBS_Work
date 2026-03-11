class Admin{
    int admId;
    String admName;
    double admSalary;
    double admAllowance;

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
        // System.out.println("Admin ID: " + this.admId);
        return this.admId;
    }
    String getName(){
        // System.out.println("Admin Name: " + this.admName);
        return this.admName;
    }
    double getSalary(){
        // System.out.println("Admin " + this.admId + " Salary: " + this.admSalary);
        return this.admSalary;
    }
    double getAllowance(){
        // System.out.println("Admin " + this.admId + " Allowance: " + this.admAllowance);
        return this.admAllowance;
    }
    void display(){
        System.out.println("Admin ID: " + this.admId);
        System.out.println("Admin Name: " + this.admName);
        System.out.println("Admin " + this.admId + " Salary: " + this.admSalary);
        System.out.println("Admin " + this.admId + " Allowance: " + this.admAllowance);
    }
}

class TestAdmin{
    public static void main(String[] args) {
        Admin a1 = new Admin();
        a1.setId(901);
        a1.setName("Lando Norris");
        a1.setSalary(1500000);
        a1.setAllowance(123000);
        // a1.getId();
        // a1.getName();
        // a1.getSalary();
        // a1.getAllowance();
        a1.display();
    }
}