class Printer{
    Printer(){
        System.out.println("Default print");
    }
    Printer(int a){
        System.out.println(a);
    }
    Printer(char a){
        System.out.println(a);
    }
    Printer(String a){
        System.out.println(a);
    }
}

class TestPrinter{
    public static void main(String[] args) {
        Printer p1 = new Printer();
        Printer p2 = new Printer(10);
        Printer p3 = new Printer("a");
        Printer p4 = new Printer("Hello");
    }
}