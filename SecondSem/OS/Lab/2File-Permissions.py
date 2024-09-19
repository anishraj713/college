import os

def check_file_permissions(file_path):
    # Reading File
    if os.access(file_path, os.R_OK):
        print(f"Read permission is granted for file: {file_path}")
    else:
        print(f"Read permission is not granted for file: {file_path}")
    # Writing File
    if os.access(file_path, os.W_OK):
        print(f"Write permission is granted for file: {file_path}")
    else:
        print(f"Write permission is not granted for file: {file_path}")
    # Executing File
    if os.access(file_path, os.X_OK):
        print(f"Execute permission is granted for file: {file_path}")
    else:
        print(f"Execute permission is not granted for file: {file_path}")


file_path = "D:\\College\\SecondSem\\OS\\Lab\\example.txt"
check_file_permissions(file_path)
