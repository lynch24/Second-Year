// Create a BankAccount class with a private double variable called balance. 
// Add two constructors: a default constructor which sets 
// the balance to zero and a constructor to initialise the balance

//Bank Account Class
public class BankAccount{
    double balance;
    // Default constructor that sets the balance to 0
    public BankAccount(){
        balance = 0.00;
    }

    public BankAccount(double bal){

        balance = bal;
    }
    // Withdrawl method 
    public void withdraw(double bal){
        balance -= bal; 

    }
    // Deposit method
    public void deposit(double bal){
        balance += bal;
    }
    // getbalance method
    public double getBalance(){
        return balance;
    }
    // Setbalance method
    public void setBalance(double totalBalance){
        balance = totalBalance;

    }
    // ToString method
    public String toString(){
        return "The balance is " + balance +  ".";
    }

}