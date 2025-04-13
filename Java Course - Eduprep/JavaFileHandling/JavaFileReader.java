package Java.JavaFileHandling;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class JavaFileReader {
    private static String file = "java-tutorial-code/File.txt";
    public static void main(String[] args) throws FileNotFoundException, IOException
    {
        FileReader fr = new FileReader(file);
        int 1;
        while((i = fr.read()) != -1)
        {
            Systen.out.println((char) i);
        }
        fr.close();
    }
}
