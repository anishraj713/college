import socket


def main():
    try:
        while True:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as ss:
                ss.bind(("localhost", 4111))
                ss.listen(1)
                print("Waiting for connection...")
                conn, addr = ss.accept()
                with conn:
                    print("Connection done\n")
                    message = input("Enter your message to client\n")
                    conn.sendall(message.encode("utf-8"))
    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
