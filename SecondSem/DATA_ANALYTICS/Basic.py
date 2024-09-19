# print ("Hello World")
# --------------------------------------------------
"""
# Data Type
Name = "Anish"
Age = 22
floatNum = 44.55
is_true = False

print (Name)
print (Age)
print (floatNum)
print(is_true)
"""
# ---------------------------------------------------
"""
firstName = "Tony"
lastName = "Stark"
Age = 51
is_genius

print (Name)
print(firstName + " " + lastName +  " age is " + str(Age) + " years old.")

if is_genius:
    print("Tony is genius.")

elif is_genius == False:
    print("Tony is not genius.")

else:
    print("Don't Know")
"""
# ------------------------------------------------------
"""
# Taking Input
Name = input(str("Enter you Name: "))
print(Name)
age = int()
print(age)
"""
# ------------------------------------------------------
# For Do While & While Loop
"""
# For loop
numbers = (34,54,67,21,78,97,45,44,80,19)
total = 0
for num in numbers:
   total = total + num
print ("Total =", total)
"""
# While loop


# import pandas as pd

# data = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  # List
# df = pd.DataFrame(
#     data, index=["A", "B ", "C", "D", "E", "F", "G", "H", "I", "K"], columns=["Number"]
# )
# print(df)


# class Person:
#     def __init__(self, fname, lname):
#         self.firstname = fname
#         self.lastname = lname


# class Student(Person):
#     def __init__(self, fname, lname, year):
#         super().__init__(fname, lname)
#         self.graduationyear = year

#     def welcome(self):
#         print(
#             "Welcome",
#             self.firstname,
#             self.lastname,
#             "to the class of",
#             self.graduationyear,
#         )


# yield8 = Student("Mike", "Olsen", 2019)
# yield8.welcome()

# thistuple = ("apple", "banana", "cherry")
# (red,green,blue)=thistuple
# # y = list(thistuple)
# # thistuple.append("orange",)
# # thistuple = tuple(y)
# print(red)


# class Person:
#     def __init__(self, fname, lname):
#         self.fname = fname
#         self.lname = lname


# class student(Person):
#     def __init__(self, fname, lname, year):
#         super().__init__(fname, lname)
#         self.year = year

#     def printstudent(self):
#         print(self.fname, self.lname, self.year)


# def inputfromuser():
#     fname = input("Enter your firstName: ")
#     lname = input("Enter your lastName: ")
#     year = int(input("Enter Your Year: "))
#     return fname, lname, year


# p1_details = inputfromuser()
# p1 = student(*p1_details)

# p2_details = inputfromuser()
# p2 = student(*p2_details)

# p1.printstudent()


# def calculate_series(x, n):
#     result = 0
#     factorial = 1
#     for i in range(1, n + 1):
#         factorial *= i
#         if i % 2 == 1:
#             result += (x ** i) / factorial
#         else:
#             result -= (x ** i) / factorial
#     return result

# # Example usage:
# x = 2
# n = 4
# print("Result:", calculate_series(x, n))



# def find_second_largest_and_second_smallest(numbers):
#     if len(numbers) < 2:
#         return "List must contain at least two elements"
#     numbers.sort()
#     second_smallest = numbers[1]
#     second_largest = numbers[-2]

#     return second_smallest, second_largest

# try:
#     num_elements = int(input("Enter the number of elements in the list: "))
#     numbers = []
#     for i in range(num_elements):
#         num = float(input(f"Enter element {i+1}: "))
#         numbers.append(num)

#     second_smallest, second_largest = find_second_largest_and_second_smallest(numbers)
#     print("Second smallest element:", second_smallest)
#     print("Second largest element:", second_largest)

# except ValueError:
#     print("Please enter valid numeric input.")


"""
a = 5
b = 7
c = 3
if(a>=b) and (a>=c):
    largest = a
elif(b>=a) and (b>=c):
    largest = b
else:
    largest = c
print(largest)
"""
"""
num = 10
n1,n2 = 0,1
print("fibonacci series: ", n1,n2, end =" ")
for i in range (2,num):
    n3 = n1+n2
    n1 = n2
    n2 = n3
    print (n3, end=" ")
print()
"""
str2 = "Online Python compiler (interpreter) to run Python online."
str1 = "Write Python 3 code in this online editor and run it."
print (str1.replace("Write", "Anish"))