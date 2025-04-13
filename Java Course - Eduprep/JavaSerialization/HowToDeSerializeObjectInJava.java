package Java.JavaSerialization;

import java.io.FileInputStream;

public class HowToDeSerializeObjectInJava {
    public static void main(String[] args) {
        try 
        {
            FileInputStream fin = new FileInputStream(" ");
            ObjectInputStream in = new ObjectInputStream(fin);
            Shape shape = (shape)in.readObject();
            System.out.println(shape.getName() + " " + shape.getsize() + " " + shape.getValue());

            in.close();
            fin.close();
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}
