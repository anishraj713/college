import socket


def main():
    try:
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            s.connect(("localhost", 9999))
            print("Connected to server...")

            in_from_server = s.makefile("r")
            out_to_server = s.makefile("w")
            in_from_user = input

            while True:
                client_message = input("Client: ")
                out_to_server.write(client_message + "\n")
                out_to_server.flush()

                server_message = in_from_server.readline().strip()
                if server_message == "bye":
                    break
                print("Server: " + server_message)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
