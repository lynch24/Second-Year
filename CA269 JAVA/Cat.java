public class Cat extends Animal {

    public Cat(String n){  // Passing the string n like in the animal class

        super(n); 
    }
    public String hello(){ // Returning the correct greeting in this case 'Meow'
        return "Meow";
    }
}