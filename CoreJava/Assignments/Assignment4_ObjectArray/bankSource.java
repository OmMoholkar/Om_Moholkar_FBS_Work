import javax.imageio.plugins.tiff.BaselineTIFFTagSet;

class BankAccount{
    int accNo;
    String accHolderName;
    double currentBalance;
    static double interestRate;
    BankAccount(){
        this.accNo = 123456;
        this.accHolderName = "Mukesh Ambani";
        this.currentBalance = 123450000;
        // this.interestRate = 8.5;
    }
    BankAccount(int accNo, String name, double bal){
        this.accNo = accNo;
        this.accHolderName = name;
        this.currentBalance = bal;
        // this.interestRate = interest;
    }
    void setAccNumber(int accNum){
        this.accNo = accNum;
    }
    void setAccName(String name){
        this.accHolderName = name;
    }
    void setBalance(double bal){
        this.currentBalance = bal;
    }
    static void setInterest(double interest){
        interestRate = interest;
    }
    int getAccNumber(){
        return this.accNo;
    }
    String getAccName(){
        return this.accHolderName;
    }
    double getBalance(){
        return this.currentBalance;
    }
    double getInterest(){
        return interestRate;
    }
    void display(){
        System.out.println("\n******** Bank Account ********");
        System.out.println("Account Number: " + getAccNumber());
        System.out.println("Account Holder Name: " + getAccName());
        System.out.println("Current Balance: " + getBalance());
        System.out.println("Interest Rate: " + getInterest());
    }
}

class TestBankAccount{
    public static void main(String[] args) {
        BankAccount[] accounts = new BankAccount[3];
        accounts[0] = new BankAccount();
        accounts[1] = new BankAccount(345621,"Jaspreet Bumrah", 550080);
        accounts[2] = new BankAccount(9876543, "Kenny Sabastian", 637000);
        for(int i=0; i<accounts.length; i++){
            accounts[i].display();
        }
        BankAccount.setInterest(7.3);
        // System.out.println(BankAccount.interestRate);
        for(int i=0; i<accounts.length; i++){
            accounts[i].display();
        }
    }
}