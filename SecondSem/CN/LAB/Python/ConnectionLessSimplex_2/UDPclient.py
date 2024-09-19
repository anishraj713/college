import socket


def main():
    try:
        # Create a UDP socket
        client_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

        # Server address and port
        server_address = ("localhost", 9876)

        # Message to send
        message = "Hello, UDP Server!"

        # Convert the message to bytes
        send_data = message.encode()

        # Send the packet to the server
        client_socket.sendto(send_data, server_address)

        print(f"Message sent to server: {message}")

        # Close the socket
        client_socket.close()
    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
