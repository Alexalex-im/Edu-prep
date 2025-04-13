package Java.JavaAccess;

public class JavaMethodOverloading {
    public void Area(int a)
    {
        int area = a*a;
        System.out.println("area of a square = " + area);
    }

    public void area (double a)
    {
        double area = a*a;
        System.out.println("area of a square = " + area);
    }

    public void area (double height, double width)
    {
        double area = height * width;
        System.out.println("area of a rectangle = " +area);
    }

    public void area (double a, double b, double height)
    {
        double area = ((0.5 * (a + b)) * height);
        System.out.println("area of a trapzoid = " +area);
}

public class overloading 
{
    public static void main(String[] args)
    {
        Area a = new Area();
        a.area(5); // square
        a.area(5, 5);
        a.area(5, 10);
        a.area(2, 3, 5);    }
}
