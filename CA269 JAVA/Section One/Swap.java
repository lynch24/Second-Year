//Write a static method which reverses an integer array. The array will be a parameter to the method. Put the method in a Test class
//   int [] num = {2, 3, 5, 7, 11, 13, 17};
//   Call the method to reverse the array
//    Test.reverse(num);
public class Test
{
    
    // Static Reverse Method
    public static void reverse(int [] array){
        // Assigning the length of array to the variable
        int len_array = array.length;
        
        for(int index = 0; index < len_array/2;index++){

            int reverse = array[index];
            array[index] = array[len_array - index - 1];
            array[len_array - index - 1] = reverse;
        }

    }
}