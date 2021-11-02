

public class TotalArgs
{
    public static void main(String [] args)
    {
        int sum = 0; // Assinging sum to zero
        for(int i = 0; i < args.length; i++)
            sum += Integer.parseInt(args[i]); // Adds the args up to produce the sum
         System.out.printf("The sum of all the args is %d.%n",sum); // outputs the expected text and the sum of the args a user has entered
    }
}