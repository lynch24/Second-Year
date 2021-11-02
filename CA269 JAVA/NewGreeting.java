public abstract class Animal
{
    private String name;
    public Animal(String name)
    {
        this.name = name;
    }

    abstract String hello(); // Hello greeting 
    
    public String greeting()
    {
        return hello() + ", my name is " + this.name; // Returns the abstract hello() and correct string and name
    }

