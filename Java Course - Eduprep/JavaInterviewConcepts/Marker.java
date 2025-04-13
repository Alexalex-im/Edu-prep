package Java.JavaInterviewConcepts;

import java.io.Serializable;

interface ThemeparkBand
{

}

// class Person             // Implements Themepark 
{
    
}

// public class MarkerInterfaceExample (Inplements Serializable)
{
    public static void main (String[] args)
    {
        Person rakesh = new Person();
        if (rakesh instanceof ThemeparkBand)
        {
            System.out.println("Yes, He can either into Themepark");
        }
        else 
        {
            System.out.println("No, He doesn't have theme park band so the doesn't have permission to enter into Theme park");
        }
    }
}
