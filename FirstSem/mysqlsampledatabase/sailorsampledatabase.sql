-- create database sailor;
use sailor;
-- Create the 'sailors' table
CREATE TABLE sailors (
  sailor_id INT PRIMARY KEY AUTO_INCREMENT,
  sailor_name VARCHAR(50) NOT NULL,
  sailor_rating INT NOT NULL,
  sailor_age INT NOT NULL
);

-- Create the 'boats' table
CREATE TABLE boats (
  boat_id INT PRIMARY KEY AUTO_INCREMENT,
  boat_name VARCHAR(50) NOT NULL,
  boat_length INT NOT NULL,
  boat_color VARCHAR(20) NOT NULL
);

-- Create the 'reserves' table
CREATE TABLE reserves (
  reserve_id INT PRIMARY KEY AUTO_INCREMENT,
  sailor_id INT NOT NULL,
  boat_id INT NOT NULL,
  reserve_date DATE NOT NULL,
  FOREIGN KEY (sailor_id) REFERENCES sailors(sailor_id),
  FOREIGN KEY (boat_id) REFERENCES boats(boat_id)
);


INSERT INTO boats (boat_id,boat_name, boat_length, boat_color) VALUES
-- (11,'Sailboat A', 30, 'Blue'),
-- (22,'Sailboat B', 35, 'Red'),
-- (33,'Fishing Boat X', 40, 'Green'),
-- (44,'Fishing Boat Y', 38, 'Yellow'),
-- (55,'Speedboat Z', 25, 'White'),
-- (66,'Canoe 1', 15, 'Orange'),
-- (77,'Kayak 2', 12, 'Pink'),
-- (88,'Yacht 3', 50, 'Black'),
-- (99,'Rowboat 4', 18, 'Purple'),
(89,'Rowboat', 24, 'black');

INSERT INTO sailors (sailor_id,sailor_name, sailor_rating, sailor_age) VALUES
-- (1,'John Doe', 80, 25),
-- (2,'Jane Smith', 92, 28),
-- (3,'Bob Johnson', 88, 30),
-- (4,'Alice Williams', 95, 22),
-- (5,'Charlie Brown', 85, 32),
-- (6,'Eva Davis', 90, 27),
-- (7,'Frank Miller', 87, 29),
-- (8,'Grace Wilson', 93, 26),
-- (9,'Harry Jones', 89, 31);
-- (6,'Eva Davis', 10, 27);
(9999,'krishna', 99, 27),
(8888,'Anish', 99, 27);

INSERT INTO reserves (reserve_id,sailor_id, boat_id, reserve_date) VALUES
-- (111, 1, 33, '2023-01-01'),
-- (222, 1, 55, '2023-02-15'),
-- (333, 2, 22, '2023-03-10'),
-- (444, 3, 77, '2023-04-22'),
-- (555, 4, 33, '2023-05-05'),
-- (666, 7, 11, '2023-06-30'),
-- (777, 5, 55, '2023-07-12'),
-- (888, 9, 88, '2023-08-08'),
-- (999, 7, 66, '2023-09-18'),
(88888, 9999, 44, '2023-08-08'),
(99999, 8888, 99, '2023-09-18');
