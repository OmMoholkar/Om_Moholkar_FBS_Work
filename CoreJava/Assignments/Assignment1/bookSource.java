class Book{
    int ISBN;
    String bkName;
    String bkCategory;
    double bkPrice;
    void setISBN(int num){
        this.ISBN = num;
    }
    void setName(String name){
        this.bkName = name; 
    }
    void setCategory(String cat){
        this.bkCategory = cat;
    }
    void setPrice(double price){
        this.bkPrice = price;
    }
    int getISBN(){
        // System.out.println("ISBN: " + this.ISBN);
        return this.ISBN;
    }
    String getName(){
        // System.out.println("Book Name: " + this.bkName);
        return this.bkName;
    }
    String getCategory(){
        // System.out.println("Category: " + this.bkCategory);
        return this.bkCategory;
    }
    double getPrice(){
        // System.out.println("Price: " + this.bkPrice);
        return this.bkPrice;
    }
    void display(){
        System.out.println("ISBN: " + this.ISBN);
        System.out.println("Book Name: " + this.bkName);
        System.out.println("Category: " + this.bkCategory);
        System.out.println("Price: " + this.bkPrice);
    }
}

class TestBook{
    public static void main(String[] args) {
        Book b1 = new Book();
        b1.setISBN(30029);
        b1.setName("How to Stop Time");
        b1.setCategory("Historical Fiction");
        b1.setPrice(77.23);
        // b1.getISBN();
        // b1.getName();
        // b1.getCategory();
        // b1.getPrice();
        b1.display();
    }
}