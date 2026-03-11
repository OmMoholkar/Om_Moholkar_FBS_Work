class Student{
    int rollNo;
    String stuName;
    float studMarks;
    void setRollNo(int rnum){
        this.rollNo = rnum;
    }
    void setName(String name){
        this.stuName = name;
    }
    void setMarks(float mks){
        this.studMarks = mks;
    }
    int getRollNo(){
        // System.out.println("Roll No: " + this.rollNo);
        return this.rollNo;
    }
    String getName(){
        // System.out.println("Student Name: " + this.stuName);
        return this.stuName;
    }
    float getMarks(){
        // System.out.println("Student Marks: " + this.studMarks);
        return this.studMarks;
    }
    void display(){
        System.out.println("Roll No: " + this.rollNo);
        System.out.println("Student Name: " + this.stuName);
        System.out.println("Student Marks: " + this.studMarks);
    }
}

class TestStudent{
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setRollNo(10);
        s1.setName("Divyanshi Mishra");
        s1.setMarks(87.67);
        // s1.getRollNo();
        // s1.getName();
        // s1.getMarks();
        s1.display();
    }
}
