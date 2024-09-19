create database School;
use school;
-- quetion1 
CREATE TABLE department (
    department_No INT PRIMARY KEY,
    department_Name CHAR(30)
);

CREATE TABLE Course_offered (
    Course_Code INT PRIMARY KEY,
    Course_Name CHAR(233),
    Course_Credits INT,
    department_No INT,
    FOREIGN KEY (department_No) REFERENCES department(department_No)
);

CREATE TABLE Student (
    Student_No INT PRIMARY KEY,
    Name CHAR(233),
    DOB DATE,
    Gender CHAR(10),
    Department_Code INT,
    FOREIGN KEY (Department_Code) REFERENCES department(department_No)
);

CREATE TABLE Course_Registered (
    Course_Code INT,
    Student_No INT PRIMARY KEY,
    FOREIGN KEY (Course_Code) REFERENCES Course_offered(Course_Code),
    FOREIGN KEY (Student_No) REFERENCES Student(Student_No)
);


INSERT INTO department (department_No, department_Name) VALUES
(1, 'Computer Science'),
(2, 'Mathematics'),
(3, 'Physics'),
(4, 'Biology'),
(5, 'History'),
(6, 'Chemistry'),
(7, 'English'),
(8, 'Economics');


INSERT INTO Course_offered (Course_Code, Course_Name, Course_Credits, department_No) VALUES
(101, 'Introduction to Programming', 3, 1),
(102, 'Calculus I', 4, 2),
(103, 'Physics I', 4, 3),
(104, 'Biology Basics', 3, 4),
(105, 'World History', 3, 5),
(106, 'Chemistry Fundamentals', 4, 6),
(107, 'English Literature', 3, 7),
(108, 'Microeconomics', 3, 8);

INSERT INTO Student (Student_No, Name, DOB, Gender, Department_Code) VALUES
(1001, 'Rahul Sharma', '2000-05-15', 'Male', 1),
(1002, 'Priya Patel', '1999-08-22', 'Female', 2),
(1003, 'Arun Kumar', '2001-02-10', 'Male', 3),
(1004, 'Sonia Verma', '2000-11-05', 'Female', 4),
(1005, 'Kiran Singh', '2002-04-30', 'Male', 4),
(1006, 'Neha Wilson', '1998-12-18', 'Female', 6),
(1007, 'Aarav Patel', '2001-06-20', 'Male', 7),
(1008, 'Ananya Kim', '1999-03-12', 'Female', 8),
(1009, 'Sameer Patel', '2001-06-20', 'Male', 8),
(1010, 'Sneha Kim', '1999-03-12', 'Female', 8);

INSERT INTO Course_Registered (Course_Code, Student_No) VALUES
(101, 1001),
(102, 1002),
(103, 1003),
(104, 1004),
(104, 1005),
(106, 1006),
(107, 1007),
(108, 1008),
(108, 1009),
(108, 1010);


-- quetion 2
ALTER TABLE Student
ADD COLUMN Date_of_Admission DATE;

UPDATE Student
SET Date_of_Admission = CASE
    WHEN Gender = 'Male' THEN '2023-10-20'
    WHEN Gender = 'Female' THEN '2023-10-15'
    ELSE NULL
END;
set sql_safe_updates = 0;

-- question 3
SELECT d.department_no, d.department_name, COUNT(s.student_no) as student_count
FROM department d
JOIN student s ON d.department_no = s.department_code
GROUP BY d.department_no, d.department_name
ORDER BY student_count DESC
LIMIT 1 OFFSET 1;

-- question 4
SELECT co.course_code, co.course_name, COUNT(cr.student_no) as student_count
FROM course_offered co LEFT JOIN course_registered cr ON co.course_code = cr.course_code
GROUP BY co.course_code, co.course_name;

SELECT co.course_code, co.course_name, COUNT(cr.student_no) as student_count
FROM course_offered co,course_registered cr where co.course_code = cr.course_code
GROUP BY co.course_code, co.course_name;

SELECT co.course_code, co.course_name, COUNT(cr.student_no) as student_count
FROM course_offered co,course_registered cr where co.course_code = 108
GROUP BY co.course_code, co.course_name;

-- question 5
SELECT s.student_no, s.name, s.dob,
TIMESTAMPDIFF(YEAR, s.dob, CURDATE()) AS age
FROM student s
JOIN department d ON s.department_code = d.department_no
WHERE d.department_name = 'Computer Science';

-- quetion 6
SELECT *
FROM department d
JOIN student s ON d.department_No = s.department_code
WHERE name LIKE 'A%' OR name LIKE 'a%';

select * from student;
describe student;