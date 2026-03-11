class Product{
    int prodId;
    String prodName;
    double prodPrice;
    int prodQty;
    void setId(int id){
        this.prodId = id;
    }
    void setName(String name){
        this.prodName = name;
    }
    void setPrice(double price){
        this.prodPrice = price;
    }
    void setQty(int qty){
        this.prodQty = qty;
    }
    int getId(){
        // System.out.println("Product ID: " + this.prodId);
        return this.prodId;
    }
    String getName(){
        // System.out.println("Product Name: " + this.prodName);
        return this.prodName;
    }
    double getPrice(){
        // System.out.println("Product price: " + this.prodPrice);
        return prodPrice;
    }
    int getQty(){
        // System.out.println("Quantity: " + this.prodQty);
        return this.prodQty;
    }
    void display(){
        System.out.println("Product ID: " + this.prodId);
        System.out.println("Product Name: " + this.prodName);
        System.out.println("Product price: " + this.prodPrice);
        System.out.println("Quantity: " + this.prodQty);
    }
}

class TestProduct{
    public static void main(String[] args) {
        Product p1 = new Product();
        p1.setId(101);
        p1.setName("Soap");
        p1.setPrice(200);
        p1.setQty(300);
        // p1.getId();
        // p1.getName();
        // p1.getPrice();
        // p1.getQty();
        p1.display();
    }
}