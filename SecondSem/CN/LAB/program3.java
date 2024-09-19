import java.io.*;
import java.net.*;

public class Clients{
    public static void main(String[] args) {
        try {
            
            Socket clientSocket = new Socket("localhost", 1234);

            BufferedReader inFromServer = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter outToServer = new PrintWriter(clientSocket.getOutputStream(), true);

            BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));

            String serverMessage;
            String clientMessage;

            while (true) {
                if ((serverMessage = inFromServer.readLine()) != null) {
                    System.out.println("Server: " + serverMessage);
                }

                if (inFromUser.ready()) {
                    clientMessage = inFromUser.readLine();
                    outToServer.println(clientMessage);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}




import java.io.*;
import java.net.*;

public class Servers{
    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(1234);
            System.out.println("Server started, waiting for client...");

            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected: " + clientSocket);

            BufferedReader inFromClient = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter outToClient = new PrintWriter(clientSocket.getOutputStream(), true);

            BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));

            String clientMessage;
            String serverMessage;

            while (true) {
                if ((clientMessage = inFromClient.readLine()) != null) {
                    System.out.println("Client: " + clientMessage);
                }

                    if (inFromUser.ready()) {
                    serverMessage = inFromUser.readLine();
                    outToClient.println(serverMessage);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
