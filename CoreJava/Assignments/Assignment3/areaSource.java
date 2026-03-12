class Triangle{
    double base, height;
    Triangle(double base, double height){
        this.base = base;
        this.height = height;
    }
    void setBase(double base){
        this.base = base;
    }
    void setHeight(double height){
        this.height = height;
    }
    double getBase(){
        return this.base;
    }
    double getHeight(){
        return this.height;
    }
}

class Rectangle{
    double length, breadth;
    Rectangle(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }
    void setLength(double len){
        this.length = len;
    }
    void setBreadth(double breadth){
        this.breadth = breadth;
    }
    double getLength(){
        return this.length;
    }
    double getBreadth(){
        return this.breadth;
    }
}

class Circle{
    double radius;
    Circle(double radius){
        this.radius = radius;
    }
    void setRadius(double rad){
        this.radius = rad;
    }
    double getRadius(){
        return this.radius;
    }
}

class Shape{
    double area(Triangle t){
        return 0.5*t.getHeight()*t.getBase();
    }
    double area(Rectangle r){
        return r.getLength()*r.getBreadth();
    }
    double area(Circle c){
        return (22.0/7)*c.getRadius()*c.getRadius();
    }
}

class TestShape{
    public static void main(String[] args) {
        Triangle t1 = new Triangle(12.4,6.9);
        Rectangle r1 = new Rectangle(6.5,12.7);
        Circle c1 = new Circle(3);
        Shape s1 = new Shape();
        System.out.println("Area of Triangle: " + s1.area(t1));
        System.out.println("Area of Rectangle: " + s1.area(r1));
        System.out.println("Area of Circle: " + s1.area(c1));
    }
}