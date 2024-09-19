import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) throws IOException {
        try {
            Socket s = new Socket("localhost", 4111);
            BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
            String l = br.readLine(); //receives value from the server
            System.out.println(l + "\n");
            System.out.println(" Message Received");
            s.close();
        }
        catch( Exception e)
        {
            System.out.println(e);
        }
    }

}


import java.io.*;
import java.net.*; 
import java.util.Scanner;
public class Server {
    public static void main(String[] args) throws IOException {

        try {
            while (true) {
                ServerSocket ss = new ServerSocket(4111); //Object creation
                Socket s = ss.accept();  //connection is made
                System.out.println("Connection done\n");
                PrintStream ps = new PrintStream(s.getOutputStream()); //To sent message to the client
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter your message to client\n");
                String str=sc.nextLine();
                ps.print(str);
                ps.flush();
                ss.close();
                s.close();
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }

    }

}
