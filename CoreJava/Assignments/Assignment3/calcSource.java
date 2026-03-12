class Calculator{
    int add(int a, int b){
        System.out.println("Type 1");
        return a+b;
    }
    double add(double a, double b){
        System.out.println("Type 2");
        return a+b;
    }
    double add(int a, double b){
        System.out.println("Type 3");
        return a+b;
    }
    double add(double a, int b){
        System.out.println("Type 4");
        return a+b;
    }
    int sub(int a, int b){
        return a-b;
    }
    double sub(double a, double b){
        return a-b;
    }
    double sub(int a, double b){
        return a-b;
    }
    double sub(double a, int b){
        return a-b;
    }
    int mul(int a, int b){
        return a*b;
    }
    double mul(double a, double b){
        return a*b;
    }
    double mul(int a, double b){
        return a*b;
    }
    double mul(double a, int b){
        return a*b;
    }
    int div(int a, int b){
        return a/b;
    }
    double div(double a, double b){
        return a/b;
    }
    double div(int a, double b){
        return a/b;
    }
    double div(double a, int b){
        return a/b;
    }
}

class TestCalculator{
    public static void main(String[] args) {
        Calculator c1 = new Calculator();
        System.out.println("Add");
        System.out.println(c1.add(10,10));
        System.out.println(c1.add(3.14,3.14));
        System.out.println(c1.add(10,3.14));
        System.out.println(c1.add(3.14,10));
        System.out.println("Subtract");
        System.out.println(c1.sub(20,10));
        System.out.println(c1.sub(13.14,3.14));
        System.out.println(c1.sub(10,3.14));
        System.out.println(c1.sub(13.14,10));
        System.out.println("Multiply");
        System.out.println(c1.mul(10,10));
        System.out.println(c1.mul(3.14,3.14));
        System.out.println(c1.mul(10,3.14));
        System.out.println(c1.mul(3.14,10));
        System.out.println("Divide");
        System.out.println(c1.div(100,10));
        System.out.println(c1.div(13.14,3.14));
        System.out.println(c1.div(10,3.14));
        System.out.println(c1.div(13.14,10));

    }
}