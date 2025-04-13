package Java.JavaFileHandling;

import java.io.ByteArrayOutputStream;;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class JavaByteArrayOutputStream {
    private static String file1 = "Tutorial-code/File1.txt";
    private static String file2 = "Tutorial-code/File2.txt";

    public static void main(String[] args) throws FileNotFoundException, IOException {
        FileOutputStream fout1 = new FileOutputStream(file1);
        FileOutputStream fout2 = new FileOutputStream(file2);

        ByteArrayOutputStream bout = new ByteArrayOutputStream();

        String word = "Rakesh";
        byte bytes[] = word.getBytes();
        bout.write(bytes);
        bout.write(fout1);
        bout.writeTo(fout2);
        bout.flush();
        bout.close();
        System.out.println("Task completed");
    }
}
