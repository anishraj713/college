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
                if (clientMessage.equals("bye")) {
                    break;
                }
                System.out.println("Client: " + clientMessage);
                System.out.print("Server: ");
                serverMessage = inFromUser.readLine();
                outToClient.println(serverMessage);
            }

            clientSocket.close(); // Close the client socket
            serverSocket.close();  // Close the server socket

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
