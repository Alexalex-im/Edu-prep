package Java.JavaFileHandling;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class JavaFileInputStream {
    private static String File = "41/Rakesh/java-tutorial-code/File.text";

    public static void main(String[] args) throws FileNotFoundException, IOException
    {
        FileInputStream fin = new FileInputStream(file);
        int i=0;
        while (i=fin.read() != -1)
        {
            System.out.println((char)i);
        }
        fin.close();
    }

}
