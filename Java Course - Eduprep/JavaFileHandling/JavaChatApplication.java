package Java.JavaFileHandling;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.ServerSocket;
import java.net.Socket;

public class JavaChatApplication {
    public static void main(String[] args) throws IOException
    {
        serverSocket ss = new serverSocket(3333);
        Socket s = ss.accept();

        DataInputStream din = new DataInputStream(s.getInputStream());

        DataOutputStream dout = new DataOutputStream(s.getOutputStream());

        BufferedReader br = new BufferedReader(new InputStreamReader(system.in));

        String str = " ", str2 = " ";
        while (!str.equals("stop"))
        {
            str = din.readUTF();
            System.out.println("client says : " + str);
            str2 = br.readLine();
            dout.writeUTF(str2);
            dout.flush();
        }
        din.close();
        s.close();
        ss.close();
    }
}



import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.socket;

// public class chatClient
{
    public static void main(String[] args) throws IOException
    {
        Socket s = new Socket ("LocalHost", 3333);
        DataInputStream din = new DataInputStream(s.getInputStream());

        DataOutputStream dout = new DataOutputStream(s.getOutputStream());

        BufferedReader br = new BufferedReader(new InputStreamReader(system.in));

        String str = " ", str2 = " ";

        while (!str.equals("stop"))
        {
            str = br.readLine();
            dout.writeUTF(str);
            dout.flush();
            str2 = din.readUTF();
            System.ou.println("Server says : " + str2);
        }

        dout.close();
        s.close();
    }
}
