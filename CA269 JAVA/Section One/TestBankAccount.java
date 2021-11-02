public class TestBankAccount
{
   public static void main(String [] args)
   {
       // Test constructors + toString
       BankAccount account = new BankAccount(); // This uses the default constructor.
       System.out.println(account);
      
       account = new BankAccount(120); // This uses the one parameter constructor.
       System.out.println(account);
      
       // Test setters/assessors
       account.setBalance(650.00);
       System.out.println(account.getBalance());
       account.setBalance(25.00);

       System.out.println(account.getBalance());
   }
}