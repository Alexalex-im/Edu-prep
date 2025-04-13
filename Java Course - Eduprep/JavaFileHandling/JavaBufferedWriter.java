package Java.JavaFileHandling;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class JavaBufferedWriter {
    private static String file = "/Java-tutorial-code/File.txt";
    
    public static void main(String[] args) throws IOException
    {
        FileWriter writer = new FileWriter(file);
        BufferedWriter buffer = new BufferedWriter(writer);

        buffer.write("rakesh");
        buffer.close();
        System.out.println("Task complement");
    }
}
