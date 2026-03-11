class Complex{
    double real;
    double img;
    void setReal(double real){
        this.real = real;
    }
    void setImg(double img){
        this.img = img;
    }
    double getReal(){
        // System.out.println("Real Part: " + this.real);
        return this.real;
    }
    double getImg(){
        // System.out.println("Imaginary Part: " + this.img);
        return this.img;
    }
}

class TestComplex{
    public static void main(String[] args) {
        Complex c1 = new Complex();
        c1.setReal(66.2);
        c1.setImg(38.12);
        System.out.println("Complex Number: " + c1.getReal() + " + " + c1.getImg() + "i");
    }
}