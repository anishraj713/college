import socket


def main():
    try:
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_socket.bind(("", 9876))

        print("Server started. Waiting for incoming messages...")

        while True:
            receive_data, client_address = server_socket.recvfrom(1024)
            sentence = receive_data.decode("utf-8")
            ip_address, port = client_address

            print(f"Received from client at {ip_address}:{port}: {sentence}")

            capitalized_sentence = sentence.upper()
            send_data = capitalized_sentence.encode("utf-8")

            server_socket.sendto(send_data, client_address)
    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
