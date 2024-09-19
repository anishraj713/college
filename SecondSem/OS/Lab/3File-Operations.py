# import os


# def check_file_permissions(file_path):
#     # Creating File and Checking File Already exist or not
#     if not os.path.exists(file_path):
#         print(f"File does not exist. Creating file: {file_path}")
#         with open(file_path, "w") as new_file:
#             new_file.write("This is a new file.")
#     else:
#         print(f"File already exists: {file_path}")
#     # Writing File
#     if os.access(file_path, os.W_OK):
#         print(f"Write permission is granted for file: {file_path}")
#         with open(file_path, "w") as file:
#             file.write(
#                 "Hello, this is an example file.\nFeel free to add more content!"
#             )
#     else:
#         print(f"Write permission is not granted for file: {file_path}")
#     # Reading File
#     if os.access(file_path, os.R_OK):
#         print(f"Read permission is granted for file: {file_path}")
#         with open(file_path, "r") as file:
#             # reading = file.read()
#             # print(reading)
#             print(file.read())
#     else:
#         print(f"Read permission is not granted for file: {file_path}")
#     # Execute File
#     if os.access(file_path, os.X_OK):
#         print(f"Execute permission is granted for file: {file_path}")
#     else:
#         print(f"Execute permission is not granted for file: {file_path}")


# # File Path and also for creating file
# name = "example.txt"
# file_path = f"D:\\College\\SecondSem\\OS\\Lab\\{name}"
# check_file_permissions(file_path)

# -------------------------------------------------------------
# import os


# def file_operations():
#     file_path = "example.txt"

#     # Open (or create) the file
#     fd = os.open(file_path, os.O_RDWR | os.O_CREAT, 0o600)

#     try:
#         # Write to the file
#         bytes_written = os.write(fd, b"Hello, world!")
#         if bytes_written < 0:
#             raise OSError("write failed")

#         # Move the file pointer to the beginning
#         os.lseek(fd, 0, os.SEEK_SET)

#         # Read from the file
#         buffer = os.read(fd, 100)
#         if buffer is None:
#             raise OSError("read failed")

#         # Print the content read from the file
#         print("Read from file:", buffer.decode())

#     except OSError as e:
#         print(f"OS error: {e}")

#     finally:
#         # Close the file
#         os.close(fd)


# if __name__ == "__main__":
#     file_operations()
# --------------------------------------------------------
# Open a file for writing
with open("example.txt", "w") as f:
    # Write data to the file
    f.write("This is some data")
    print("Write")
# Open a file for reading
with open("example.txt", "r") as f:
    # Read the contents of the file
    data = f.read()
    print(data)
# Close the file
f.close()
