public class Pig extends Animal {
    // Same principle as cat and dog java
    public Pig(String n){ // Passing the same string as the animal class
        super(n);
    }

    public String hello(){ // Returns the correct greeting in this case 'Oink'

        return "Oink";
    }