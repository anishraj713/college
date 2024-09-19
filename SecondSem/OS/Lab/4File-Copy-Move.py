# import shutil

# # Copy the file
# source = "D:\\College\\SecondSem\\OS\\Lab\\example.txt"
# dest = "D:\\College\\SecondSem\\OS"
# shutil.copy(source, dest)
# print(f"Copied {source} to {dest}")

# # Move the file
# source = "D:\\College\\SecondSem\\OS\\Lab\\copy.txt"
# dest = "D:\\College\\SecondSem\\OS"
# shutil.move(source, dest)
# print(f"Moved {source} to {dest}")

# ----------------------------
# import shutil
# import os


# def copy_file(src, dest):
#     try:
#         shutil.copy(src, dest)
#         print(f"File copied from {src} to {dest}")
#     except FileNotFoundError:
#         print("Source file not found.")
#     except PermissionError:
#         print("Permission denied.")
#     except Exception as e:
#         print(f"An error occurred: {e}")


# def move_file(src, dest):
#     try:
#         shutil.move(src, dest)
#         print(f"File moved from {src} to {dest}")
#     except FileNotFoundError:
#         print("Source file not found.")
#     except PermissionError:
#         print("Permission denied.")
#     except Exception as e:
#         print(f"An error occurred: {e}")


# if __name__ == "__main__":
#     src = list(input("Enter the source file path: "))
#     dest = list(input("Enter the destination file path: "))

#     copy_file(src, dest)
#     move_file(src, dest)
# --------------------------------------------------------
import shutil
import os


def copy_files(src_files, dest_dir):
    for src in src_files:
        try:
            shutil.copy(src, dest_dir)
            print(f"File copied from {src} to {dest_dir}")
        except FileNotFoundError:
            print(f"Source file {src} not found.")
        except PermissionError:
            print(f"Permission denied for {src}.")
        except Exception as e:
            print(f"An error occurred with {src}: {e}")


# def move_files(src_files, dest_dir):
#     for src in src_files:
#         try:
#             shutil.move(src, dest_dir)
#             print(f"File moved from {src} to {dest_dir}")
#         except FileNotFoundError:
#             print(f"Source file {src} not found.")
#         except PermissionError:
#             print(f"Permission denied for {src}.")
#         except Exception as e:
#             print(f"An error occurred with {src}: {e}")


if __name__ == "__main__":
    src_files = input("Enter the source file paths (comma-separated): ").split(",")
    dest_dir = input("Enter the destination directory path: ").strip()

    copy_files(src_files, dest_dir)
    # move_files(src_files, dest_dir)
