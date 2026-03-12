class Student{
    int rollNo;
    String name;
    double percentage;
    Student(int rollNo, String name, double percentage){
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }
    void setRollNo(int rollNo){
        this.rollNo = rollNo;
    }
    void setName(String name){
        this.name = name;
    }
    void setPercentage(double perc){
        this.percentage = perc;
    }
    int getRollNo(){
        return this.rollNo;
    }
    String getName(){
        return this.name;
    }
    double getPercentage(){
        return this.percentage;
    }
}

class Employee{
    int empId;
    String name;
    double annualSalary;
    Employee(int id, String name, double salary){
        this.empId = id;
        this.name = name;
        this.annualSalary = salary;
    }
    void setId(int id){
        this.empId = id;
    }
    void setName(String name){
        this.name = name;
    }
    void setSalary(double salary){
        this.annualSalary = salary;
    }
    int getId(){
        return this.empId;
    }
    String getName(){
        return this.name;
    }
    double getSalary(){
        return this.annualSalary;
    }
}

class Bank{
    double approveLoan(Student s){
        double per = s.getPercentage();
        if(per >= 80)
            return 200000;
        else if (per >= 60)
            return 100000;
        else if (per >= 40)
            return 50000;
        else
            return 0;
    }
    double approveLoan(Employee e){
        double sal = e.getSalary();
        if(sal >= 1200000)
            return 700000;
        else if (sal >= 1000000)
            return 600000;
        else if (sal >= 600000)
            return 500000;
        else if (sal >= 400000)
            return 400000;
        else 
            return 0;
    }
}

class TestBank{
    public static void main(String[] args) {
        Student s1 = new Student(101, "Rakesh", 76);
        Employee e1 = new Employee(501, "Mohan", 632893);
        Bank b1 = new Bank();
        System.out.println("Loan Approved to Student: ₹" + b1.approveLoan(s1));
        System.out.println("Loan Approved to Employee: ₹" + b1.approveLoan(e1));
    }
}