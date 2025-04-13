package Java.JavaFileHandling;

import java.io.DataInputStream;
import java.io.IOException;
import java.net.Socket;
import java.net.socket;

public class JavaSocketProgram {
    public static void main(String[] args) throws IOException
    {
        try 
        {
            ServerSocket ss = new ServerSocket(6666);
            Socket s = ss.accept();
            DataInputStream dis = new DataInputStream.getInputStream();
            String str = (string)dis.readUTF();
            System.out.println("Message" + str);
            ss.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}


import java.io.DataOutputStream;
import java.net.socket;

// public class Myclient
{
    public static void main(String[] args)
    {
        try
        {
            Socket s = new socket("Localhost", 6666);
            DataOutputStream dout = new DataOutputStream(s.getOutputStream());
            dout.flush();
            dout.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
