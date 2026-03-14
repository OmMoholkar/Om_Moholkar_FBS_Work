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
        System.out.println("\n********* Employee  *********");
        System.out.println("ID: " + this.empId);
        System.out.println("Name: " + this.empName);
        System.out.println("Salary: " + this.empSalary);
    }
}

class TestEmployee{
    public static void main(String[] args) {
        Employee[] earr = new Employee[3];
        earr[0] = new Employee();
        earr[1] = new Employee(102,"Om Moholkar",70000);
        earr[2] = new Employee(103,"Samay Raina", 32900);
        for(int i=0; i<earr.length;i++){
            earr[i].display();
        }
    }
}