import socket


def main():
    try:
        client_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_address = ("localhost", 9876)

        while True:
            sentence = "Hello from client!"
            send_data = sentence.encode()

            client_socket.sendto(send_data, server_address)

            receive_data, _ = client_socket.recvfrom(1024)
            modified_sentence = receive_data.decode()
            print("Server response: " + modified_sentence)
    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
