package Java.JavaAccess;

public class AbstractClassInJava {
    public void getWelcomeMessage()
    {
        System.out.println("Welcome to abstraction");
    }
    public abstract void area();
}

//   class squareArea extends Abstractarea
{
    @override 
    public void area()
    {
        System.out.println("Finding area of a square");
    }

//  class RectangleArea extends AbstractArea
{
    @override 
    public void area()
    {
        System.out.println("Finding area of Rectangle");
    }
}

//  public class Abstractclass
{
    public static void main(String[] args)
    {
        squareArea squareArea = new squareArea();
        squareArea.getWelcomeMessage();
        squareArea.area();
        System.out.println("\n");

        RectangleArea rectangleArea = new RectangleArea();
        rectangleArea.getWelcomeMessage();
        rectangleArea.area();
    }
}
}
