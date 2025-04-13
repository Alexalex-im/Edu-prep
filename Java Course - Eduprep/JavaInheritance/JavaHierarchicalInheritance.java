public class JavaHierarchicalInheritance {
    void eat()
    {
        System.out.println("eating !!!");
    }
}

class Human extends Animal
{
    void run()
    {
        System.out.println("running !!!");
    }
}

class God extends Animal
{
    void break()
    {
        System.out.println("Barking !!!");
    }
}

// public class HierarchicalInheritance 
{
    public static void main(String[] arg)
    {
        Human human = new Human();
        System.out.println("Human");
        human.eat();
        human.run();

        Dog dog = new Dog();
        System.out.println("Dog");
        dog.eat();
        dog.bark();
    }
}
