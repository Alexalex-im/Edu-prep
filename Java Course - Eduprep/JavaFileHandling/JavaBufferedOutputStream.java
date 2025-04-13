package Java.JavaFileHandling;

import java.io.BufferedOutputStream;
import java.io.FileNotFoundException;;
import java.io.FileOutputStream;
import java.io.IOException;

public class JavaBufferedOutputStream {
    private static String file = "\11\Rakesh\Java.Tutorial-code\File.txt";
    public static void main(String[] args) throws FileNotFoundException,IOException {
        FileOutputStream fout = new FileOutputStream(file);
        BufferedOutputStream bout = new BufferedOutputStream(fout);
        byte b[] = s.getByte();
        bout.write(b);
        bout.flush();
        bout.close();
        bout.close();
        System.out.println("Task completed");
    }    
}
