class Employee{
    int empId;
    String empName;
    double empSalary;
    Employee(){
        this.empId = 101;
        this.empName = "Junaid Singh";
        this.empSalary = 35000;
    }
    Employee(int id, String name, double salary){
        this.empId = id;
        this.empName = name;
        this.empSalary = salary;
    }
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
        return this.empId;
    }
    String getName(){
        return this.empName;
    }
    double getSalary(){
        return this.empSalary;
    }
    void display(){
        System.out.println("Employee");
        System.out.println("ID: " + this.empId);
        System.out.println("Name: " + this.empName);
        System.out.println("Salary: " + this.empSalary);
    }
}

class TestEmployee{
    public static void main(String[] args) {
        Employee e1 = new Employee();
        Employee e2 = new Employee(102,"Om Moholkar",70000);
        e1.display();
        e2.display();
    }
}