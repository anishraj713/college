import socket


class UDPServer:
    def __init__(self, port=9876):
        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.server_socket.bind(("", port))
        print("UDP Server is running...")

    def run(self):
        while True:
            # Receive data from the client
            receive_data, client_address = self.server_socket.recvfrom(1024)

            # Extract the received message
            message = receive_data.decode("utf-8")
            print(f"Received from client: {message}")


if __name__ == "__main__":
    server = UDPServer()
    server.run()
