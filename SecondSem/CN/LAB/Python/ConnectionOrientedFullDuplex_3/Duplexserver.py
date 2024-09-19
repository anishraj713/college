import socket


def main():
    try:
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_socket.bind(("localhost", 9999))
        server_socket.listen(1)
        print("Server started and listening on port 9999...")

        client_socket, addr = server_socket.accept()
        print("Client connected:", addr)

        in_from_client = client_socket.makefile("r")
        out_to_client = client_socket.makefile("w")

        while True:
            client_message = in_from_client.readline().strip()
            if client_message == "bye":
                break
            print("Client:", client_message)
            server_message = input("Server: ")
            out_to_client.write(server_message + "\n")
            out_to_client.flush()

        client_socket.close()  # Close the client socket
        server_socket.close()  # Close the server socket

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
