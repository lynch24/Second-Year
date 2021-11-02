public class Dog extends Animal {

    public Dog(String n){  // Passing the string n like in the animal class

        super(n); 
    }
    public String hello(){ // Returning the correct greeting in this case 'Woof'
        return "Woof";
    }
}