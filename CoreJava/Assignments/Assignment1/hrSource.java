class HR{
    int hrId;
    String hrName;
    double hrSalary;
    double hrCommission;

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
        // System.out.println("HR ID: " + this.hrId);
        return this.hrId;
    }
    String getName(){
        // System.out.println("HR Name: " + this.hrName);
        return this.hrName;
    }
    double getSalary(){
        // System.out.println("HR " + this.hrId + " Salary: " + this.hrSalary);
        return this.hrSalary;
    }
    double getAllowance(){
        // System.out.println("HR " + this.hrId + " Allowance: " + this.hrCommission);
        return this.hrCommission;
    }
    void display(){
        System.out.println("HR ID: " + this.hrId);
        System.out.println("HR Name: " + this.hrName);
        System.out.println("HR " + this.hrId + " Salary: " + this.hrSalary);
        System.out.println("HR " + this.hrId + " Allowance: " + this.hrCommission);
    }
}

class TestHR{
    public static void main(String[] args) {
        HR a1 = new HR();
        a1.setId(301);
        a1.setName("Oscar Piastri");
        a1.setSalary(1200000);
        a1.setAllowance(223000);
        // a1.getId();
        // a1.getName();
        // a1.getSalary();
        // a1.getAllowance();
        a1.display();
    }
}