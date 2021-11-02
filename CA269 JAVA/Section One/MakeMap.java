import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;


// Create a class called MakeMap with a single static method called makeMap()

public class MakeMap
{
    // make map static method which reads input from the scanner object, Map<String, Integer> taken from main.java
    public static Map<String, Integer> makeMap(Scanner in){
        
        Map<String, Integer> map = new HashMap<String, Integer>();

        while(in.hasNext()){

            // The put method is used to insert a mapping into a
            map.put(in.next(),in.nextInt());
        }
        return map;

    }
}