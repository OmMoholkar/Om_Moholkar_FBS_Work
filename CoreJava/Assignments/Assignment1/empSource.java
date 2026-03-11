class Employee{
    int empId;
    String empName;
    double empSalary;

    void setId(int id){
        this.empId = id;
    }
    void setName(String name){
        this.empName = name;
    }
    void setSalary(double salary){
        this.empSalary = salary;
    }
    int getId(){
        // System.out.println("Employee ID: " + this.empId);
        return this.empId;
    }
    String getName(){
        // System.out.println("Employee Name: " + this.empName);
        return this.empName;
    }
    double getSalary(){
        // System.out.println("Employee " + this.empId + " Salary: " + this.empSalary);
        return this.empSalary;
    }
    void display(){
        System.out.println("Employee ID: " + this.empId);
        System.out.println("Employee Name: " + this.empName);
        System.out.println("Employee " + this.empId + " Salary: " + this.empSalary);
    }
}

class TestEmployee{
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.setId(101);
        e1.setName("Om Moholkar");
        e1.setSalary(700000);
        // e1.getId();
        // e1.getName();
        // e1.getSalary();
        e1.display();
    }
}