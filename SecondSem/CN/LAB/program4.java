import java.io.*;
import java.net.*;

public class DuplexClient {
    public static void main(String[] args) {
        try {
            Socket socket = new Socket("localhost", 9999);
            System.out.println("Connected to server...");

            BufferedReader inFromServer = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter outToServer = new PrintWriter(socket.getOutputStream(), true);
            BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));

            String serverMessage, clientMessage;

            while (true) {
                System.out.print("Client: ");
                clientMessage = inFromUser.readLine();
                outToServer.println(clientMessage);

                serverMessage = inFromServer.readLine();
                if (serverMessage == null || serverMessage.equals("bye")) {
                    break;
                }
                System.out.println("Server: " + serverMessage);
            }
            
            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}



import java.io.*;
import java.net.*;

public class DuplexServer {
    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(9999);
            System.out.println("Server started and listening on port 9999...");

            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected: " + clientSocket);

            BufferedReader inFromClient = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter outToClient = new PrintWriter(clientSocket.getOutputStream(), true);
            BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));

            String clientMessage, serverMessage;

            while (true) {
                clientMessage = inFromClient.readLine();
                if (clientMessage == null || clientMessage.equals("bye")) {
                    break;
                }
                System.out.println("Client: " + clientMessage);

                System.out.print("Server: ");
                serverMessage = inFromUser.readLine();
                outToClient.println(serverMessage);
            }

            clientSocket.close();
            serverSocket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
