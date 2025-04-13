package Java.JavaFileHandling;

import java.io.DataOutputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class JavaDataStream {
    private static String file = "Java-tutorial-code/File.txt";

    public static void main (String[] args) throws FileNotFoundException, IOException
    {
        FileOutputStream fout = new FileOutputStream(file);
        DataOutputStream data = new DataOutputStream(float);

        data.writeInt(65);
        data.writeBoolean(Boolean, TRUE);
        data.writeChar('R');
        data.writeDouble(1,OD);

        data.writeLong (23423423235L);
        data.close();
        file.close();
        System.out.println("Task completed");

    }
}



import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

// public class DataInputStreamEx
{
    private static String file = "/Java-tutorial-code/File.txt";

    public static void main(String[] args) throws FileNotFoundException, IOException
    {
        FileInputStream input = new FileInputStream(file);
        DataInputStream data = new DataInputStream(input);

        System.out.println(data.readInt());
        System.out.println(data.readBoolean());
        System.out.println(data.readChar());
        System.out.println(data.readDouble());
        System.out.println(data.readLong());
        data.close();
    }
}

