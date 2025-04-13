package Java.JavaAccess;

public class JavaInterface {
    public void getWelcomeMessage();
    public void area();
}

// class circleArea implements Interface
{
    @override 
    public void getWelcomeMessage()
    {
        System.out.println("Welcome to interface implementation");
    }

    @override 
    public void area()
    {
        System.out.println("Finding circle area");
    }

    public class InterfaceExample 
    {
        public static void main (String[] args)
        {
            circleArea circleArea = new circleArea();
            CircleArea.getWelcomeMessage();
            circleArea.area();
        }
    }
}
