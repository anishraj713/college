import socket


class Client:
    def main(self):
        try:
            s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            s.connect(("localhost", 4111))
            br = s.makefile("r")
            l = br.readline()  # receives value from the server
            print(l + "\n")
            print("Message Received")
            s.close()
        except Exception as e:
            print(e)


if __name__ == "__main__":
    client = Client()
    client.main()
