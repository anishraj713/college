import java.net.*;

public class UDPClients {
    public static void main(String[] args) {
        try {
            DatagramSocket clientSocket = new DatagramSocket();

            InetAddress IPAddress = InetAddress.getByName("localhost");

            byte[] sendData;
            byte[] receiveData = new byte[1024];

            while (true) {
                String sentence = "Hello from client!";
                sendData = sentence.getBytes();

                DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, IPAddress, 9876);
                clientSocket.send(sendPacket);

                DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
                clientSocket.receive(receivePacket);

                String modifiedSentence = new String(receivePacket.getData(), 0, receivePacket.getLength());
                System.out.println("Server response: " + modifiedSentence);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
