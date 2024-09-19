import os
import time


# Process Control
def create_process():
    print("Creating a new process...")
    print("New process created.")


def exit_process():
    print("Exiting the current process...")
    print("Current process exited.")


def wait_for_single_object():
    print("Waiting for a single object...")
    time.sleep(2)
    print("Object is ready.")


# File Manipulation
def create_file():
    filename = "example.txt"
    print(f"Creating file '{filename}'...")
    with open(filename, "w") as f:
        f.write("Hello, World!")
    print(f"File '{filename}' created.")


def read_file():
    filename = "example.txt"
    print(f"Reading file '{filename}'...")
    with open(filename, "r") as f:
        content = f.read()
    print(f"File content: {content}")


def write_file():
    filename = "example.txt"
    print(f"Writing to file '{filename}'...")
    with open(filename, "a") as f:
        f.write("\nAppended line!")
    print(f"Writing completed.")


# Device Management
def set_console_mode():
    print("Setting console mode...")
    print("Console mode set.")


def read_console():
    print("Reading from console...")
    user_input = input("Enter something: ")
    print(f"You entered: {user_input}")


def write_console():
    print("Writing to console...")
    print("Hello, World!")


# Information Maintenance
def get_current_process_id():
    print("Getting current process ID...")
    pid = os.getpid()
    print(f"Current process ID: {pid}")


def set_timer():
    print("Setting a timer...")
    time.sleep(3)
    print("Timer finished.")


def sleep():
    print("Sleeping for a while...")
    time.sleep(2)
    print("Awake now.")


if __name__ == "__main__":
    # Demonstrating usage of the functions
    create_process()
    exit_process()
    wait_for_single_object()

    create_file()
    read_file()
    write_file()

    set_console_mode()
    read_console()
    write_console()

    get_current_process_id()
    set_timer()
    sleep()
