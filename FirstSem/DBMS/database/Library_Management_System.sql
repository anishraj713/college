create database LMS;  
use LMS;

CREATE TABLE Authors (
    AuthorID INT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    Nationality VARCHAR(255),
    DateOfBirth DATE
);

CREATE TABLE Books (
    ISBN VARCHAR(13) PRIMARY KEY,
    Title VARCHAR(255) NOT NULL,
    AuthorID INT,
    Genre VARCHAR(255),
    PublicationDate DATE,
    Status VARCHAR(50),
    FOREIGN KEY (AuthorID) REFERENCES Authors(AuthorID)
);
desc Book;

CREATE TABLE Members (
    MemberID INT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    Address VARCHAR(255),
    PhoneNumber VARCHAR(20),
    EmailAddress VARCHAR(255)
);

CREATE TABLE BorrowedBooks (
    BorrowedBookID INT PRIMARY KEY,
    BookISBN VARCHAR(13),
    MemberID INT,
    BorrowDate DATE,
    DueDate DATE,
    ReturnDate DATE,
    FOREIGN KEY (BookISBN) REFERENCES Book(ISBN),
    FOREIGN KEY (MemberID) REFERENCES Members(MemberID)
);

INSERT INTO Authors (AuthorID, Name, Nationality, DateOfBirth)
VALUES
    (1, 'F. Scott Fitzgerald', 'American', '1896-09-24'),
    (2, 'Harper Lee', 'American', '1926-04-28'),
    (3, 'George Orwell', 'British', '1903-06-25'),
    (4, 'Jane Austen', 'British', '1775-12-16'),
    (5, 'Gabriel Garcia Marquez', 'Colombian', '1927-03-06'),
    (6, 'J.K. Rowling', 'British', '1965-07-31'),
    (7, 'Agatha Christie', 'British', '1890-09-15'),
    (8, 'Leo Tolstoy', 'Russian', '1828-09-09'),
    (9, 'Mark Twain', 'American', '1835-11-30'),
    (10, 'J.R.R. Tolkien', 'British', '1892-01-03'),
    (11, 'Virginia Woolf', 'British', '1882-01-25'),
    (12, 'Ernest Hemingway', 'American', '1899-07-21'),
    (13, 'Chinua Achebe', 'Nigerian', '1930-11-16'),
    (14, 'Haruki Murakami', 'Japanese', '1949-01-12'),
    (15, 'Maya Angelou', 'American', '1928-04-04'),
    (16, 'Isabel Allende', 'Chilean', '1942-08-02'),
    (17, 'Albert Camus', 'French', '1913-11-07'),
    (18, 'Ayn Rand', 'Russian-American', '1905-02-02'),
    (19, 'Kazuo Ishiguro', 'British', '1954-11-08'),
    (20, 'Homer', 'Ancient Greek', NULL);

INSERT INTO Book (ISBN, Title, AuthorID, Genre, PublicationDate, Status)
VALUES
    ('978-12345000', 'The Great Gatsby', 1, 'Fiction', '1925-04-10', 'Available'),
    ('978-67890000', 'To Kill a Mockingbird', 2, 'Fiction', '1960-07-11', 'Borrowed'),
    ('978-54321000', '1984', 3, 'Dystopian', '1949-06-08', 'Overdue'),
    ('978-11111111', 'Pride and Prejudice', 4, 'Classic', '1813-01-28', 'Available'),
    ('978-22222222', 'One Hundred Years of Solitude', 5, 'Magical Realism', '1967-05-30', 'Available'),
    ('978-33333333', 'Harry Potter and the Sorcerer\'s Stone', 6, 'Fantasy', '1997-06-26', 'Borrowed'),
    ('978-44444444', 'Murder on the Orient Express', 7, 'Mystery', '1934-01-01', 'Available'),
    ('978-55555555', 'War and Peace', 8, 'Historical Fiction', '1869-01-01', 'Available'),
    ('978-66666666', 'The Adventures of Huckleberry Finn', 9, 'Adventure', '1884-12-10', 'Available'),
    ('978-77777777', 'The Lord of the Rings', 10, 'Fantasy', '1954-07-29', 'Borrowed'),
    ('978-88888888', 'Mrs. Dalloway', 11, 'Modernist', '1925-05-14', 'Available'),
    ('978-99999999', 'The Old Man and the Sea', 12, 'Novella', '1952-09-01', 'Available'),
    ('978-10101010', 'Things Fall Apart', 13, 'Fiction', '1958-06-01', 'Available'),
    ('978-20202020', 'Norwegian Wood', 14, 'Fiction', '1987-08-20', 'Available'),
    ('978-30303030', 'I Know Why the Caged Bird Sings', 15, 'Autobiography', '1969-04-21', 'Available'),
    ('978-40404040', 'The House of the Spirits', 16, 'Magical Realism', '1982-06-25', 'Available'),
    ('978-50505050', 'The Stranger', 17, 'Philosophical Fiction', '1942-05-01', 'Available'),
    ('978-60606060', 'Atlas Shrugged', 18, 'Philosophical Fiction', '1957-10-10', 'Available'),
    ('978-70707070', 'Never Let Me Go', 19, 'Science Fiction', '2005-03-03', 'Available'),
    ('978-80808080', 'The Iliad', 20, 'Epic Poetry', NULL, 'Available');

INSERT INTO Members (MemberID, Name, Address, PhoneNumber, EmailAddress)
VALUES
    (101, 'Alice Johnson', '123 Main St, City', '555-1234', 'alice@email.com'),
    (102, 'Bob Smith', '456 Oak Ave, Town', '555-5678', 'bob@email.com'),
    (103, 'Charlie Brown', '789 Elm St, Village', '555-9876', 'charlie@email.com'),
    (104, 'Diana Evans', '101 Pine Ln, Suburb', '555-4321', 'diana@email.com'),
    (105, 'Edward Davis', '202 Maple St, Town', '555-8765', 'edward@email.com'),
    (106, 'Fiona Lee', '303 Oak Ln, City', '555-2109', 'fiona@email.com'),
    (107, 'George Harris', '404 Cedar Ave, Suburb', '555-1098', 'george@email.com'),
    (108, 'Holly White', '505 Birch St, Village', '555-8901', 'holly@email.com'),
    (109, 'Ian Miller', '606 Pine Ave, Town', '555-6789', 'ian@email.com'),
    (110, 'Jessica Turner', '707 Maple Ln, City', '555-4567', 'jessica@email.com'),
    (111, 'Kevin Brown', '808 Cedar St, Suburb', '555-3456', 'kevin@email.com'),
    (112, 'Laura Taylor', '909 Birch Ave, Village', '555-2345', 'laura@email.com'),
    (113, 'Michael Anderson', '1010 Oak St, Town', '555-1234', 'michael@email.com'),
    (114, 'Nancy Davis', '1111 Pine Ave, City', '555-5678', 'nancy@email.com'),
    (115, 'Oliver Smith', '1212 Elm Ln, Suburb', '555-9876', 'oliver@email.com'),
    (116, 'Penelope White', '1313 Birch Ave, Village', '555-4321', 'penelope@email.com'),
    (117, 'Quincy Martin', '1414 Maple St, City', '555-8765', 'quincy@email.com'),
    (118, 'Rachel Harris', '1515 Cedar Ln, Suburb', '555-2109', 'rachel@email.com'),
    (119, 'Samuel Turner', '1616 Pine St, Town', '555-1098', 'samuel@email.com'),
    (120, 'Tiffany Brown', '1717 Oak Ave, Village', '555-8901', 'tiffany@email.com');

INSERT INTO BorrowedBooks (BorrowedBookID, BookISBN, MemberID, BorrowDate, DueDate, ReturnDate)
VALUES
    (201, '978-12345000', 101, '2023-01-15', '2023-02-15', '2023-02-10'),
    (202, '978-67890000', 102, '2023-02-01', '2023-03-01', NULL),
    (203, '978-54321000', 103, '2023-03-10', '2023-04-10', NULL),
    (204, '978-11111111', 104, '2023-04-01', '2023-05-01', NULL),
    (205, '978-22222222', 105, '2023-05-15', '2023-06-15', '2023-06-05'),
    (206, '978-33333333', 106, '2023-06-20', '2023-07-20', NULL),
    (207, '978-44444444', 107, '2023-07-05', '2023-08-05', '2023-07-25'),
    (208, '978-55555555', 108, '2023-08-10', '2023-09-10', NULL),
    (209, '978-66666666', 109, '2023-09-15', '2023-10-15', '2023-10-05'),
    (210, '978-77777777', 110, '2023-10-20', '2023-11-20', NULL),
    (211, '978-88888888', 111, '2023-11-01', '2023-12-01', '2023-11-20'),
    (212, '978-99999999', 112, '2023-12-10', '2024-01-10', NULL),
    (213, '978-10101010', 113, '2024-01-15', '2024-02-15', '2024-02-05'),
    (214, '978-20202020', 114, '2024-02-20', '2024-03-20', NULL),
    (215, '978-30303030', 115, '2024-03-05', '2024-04-05', '2024-03-25'),
    (216, '978-40404040', 116, '2024-04-10', '2024-05-10', NULL),
    (217, '978-50505050', 117, '2024-05-15', '2024-06-15', '2024-06-05'),
    (218, '978-60606060', 118, '2024-06-20', '2024-07-20', NULL),
    (219, '978-70707070', 119, '2024-07-05', '2024-08-05', '2024-07-25');
   --  (220, '978-80808080', 120, '2024-08-10', '2024-09-10', NULL)
   INSERT INTO BorrowedBooks (BorrowedBookID, BookISBN, MemberID, BorrowDate, DueDate, ReturnDate)
VALUES ('2.123', '978-80808080', 120, '2024-08-10', '2024-09-10', NULL);

        select * from borrowedbooks;
        select * from authors;
        select * from book;
        select * from members;
        
-- Alter the book table and add column publication 
alter table Book
-- add column Publiction varchar(50),
-- drop column Publiction; 
rename column Author_ID to AuthorID;
desc book;

alter table authors
-- add column Gender char(6);
 rename column Gender to Sex;
-- drop column sex;
desc authors;


update authors
set Sex = 'Female';
select * from authors;
set sql_safe_updates = 0;


-- Drop the BorrowedBooks Table
drop tables BorrowedBooks;

-- Deleting Books table Data 
truncate table borrowedbooks;
select * from borrowedbooks;
delete from BorrowedBooks;

-- Renameing Books table to Book  
alter table Books
rename to Book;
rename table Author_ID to book;
-- modify title varchar(233);

alter table borrowedbooks
modify BorrowedBookID date;


alter table borrowedbooks
modify BorrowedBookID int;    
delete from borrowedbooks where BorrowedBookID=2;

	select * from authors where authorID >15;
    select * from authors where authorID <9;
    select * from authors where authorID >=15;
    select * from authors where authorID <=5;
    
    select * from authors where nationality !='American';
      select * from authors where nationality ='American';
	select * from book,authors where authors.AuthorID = book.Author_ID and authors.AuthorID = (select Author_ID from book where book.Author_ID = 4);
	  
	select * from Members as m, BorrowedBooks as bb 
	where m.MemberID = bb.MemberID or bb.MemberID = 114;
       
       -- select * from book where Status = "Borrowed";
       describe book;
       describe members;       
       describe BorrowedBooks;
       describe authors;
       
       -- Like  
       select * from members
       where Name Like 'b%';
       
       select * from authors
       where Name Like '__y_%';
       
       select * from book
       where title like '%L%';
       
       select * from borrowedbooks
       where MemberID like '%9'; 
       

/*
WHERE,HAVING,BETWEEN -> CLAUSE we use having function when we use having function
GROUPBY,ORDERBY -> FUNCTION
MIN,MAX,COUNT,SUM,AVG -> AGGREGATE FUNCTION
LIKE OPERTAION
*/

-- join
select * from book left join borrowedbooks on ISBN = BookISBN;
select * from book right join borrowedbooks on ISBN = BookISBN;
select * from book cross join borrowedbooks on ISBN = BookISBN;
select * from book full join borrowedbooks;
select * from book natural join borrowedbooks;

select authorid,name from authors where authorid = 11 or authorid =  14;

select authorid,name,nationality from authors where nationality='greek' xor name ='F. Scott Fitzgerald';

select * from authors where not nationality='british';