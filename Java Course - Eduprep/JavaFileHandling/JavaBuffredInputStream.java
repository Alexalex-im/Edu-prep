package Java.JavaFileHandling;

import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class JavaBuffredInputStream {
    private static String file = "Rakesh/Java-Tutorial-code/File.txt";
    public static void main(String[] args) throws FileNotFoundException,IOException
    {
        File InputStream fin = new FileInputStream(file);
        BufferedInputStream bin = new BufferedInputStream(fin);
        int i;
        while ((i = bin.read()) != -1)
        {
            System.out.println((char)i);
        }
        bin.close();
        fin.close();
    }
}
