package Java.JavaFileHandling;

import java.io.IOException;

public class JavaIOIntroduction {
    public static void main(String[] args)
    {
        // syste.out = standard output stream
        System.out.println("Hello, I am printing using System.out.stream ");

        //  system.in = standard input stream
        while(true)
        {
            //  return ASCII code of list character
            int ascii = system.in.read();
            char character = (char) ascii;
            System.out.println("I am Printing using the data returned by system.in stream ascii number" + ascii + "and equivalent character is " + character);
        }
    }
}
