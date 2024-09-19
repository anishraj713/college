-- create database zoo;
use zoo;
-- create table animal(
-- name varchar(50) primary key,
-- colour varchar(50)
-- );
-- insert into animal values( 'cow', 'white');
-- alter table animal
-- add column age int, 
-- add column species varchar(50);
-- drop primary key;
-- add column id int ;

-- updating the primary key to other new coloumn
-- alter table animal
-- drop column id,
-- ADD COLUMN id INT AUTO_INCREMENT FIRST,
-- ADD PRIMARY KEY (id);


-- truncate table animal;
-- insert into animal values('cow', 'white', 4, 'bovine');
-- insert into animal values('elephant', 'gray', 10, 'mammal');
-- insert into animal values('parrot', 'green', 2, 'bird');
-- insert into animal values('tiger', 'orange', 6, 'mammal');
-- insert into animal values('fish', 'silver', 1, 'aquatic');
-- insert into animal values('dog', 'brown', 3, 'mammal');
-- insert into animal values('cat', 'black', 5, 'mammal');
-- insert into animal values('penguin', 'black and white', 2, 'bird');
-- insert into animal values('lion', 'golden', 8, 'mammal');
-- insert into animal values('turtle', 'green', 10, 'reptile');
-- insert into animal values('giraffe', 'yellow', 7, 'mammal');
-- insert into animal values('snake', 'brown', 4, 'reptile');
-- insert into animal values('dolphin', 'gray', 3, 'aquatic');
-- insert into animal values('panda', 'black and white', 6, 'mammal');
-- insert into animal values('kangaroo', 'brown', 4, 'mammal');
-- insert into animal values('crocodile', 'green', 12, 'reptile');
-- insert into animal values('owl', 'brown', 3, 'bird');
-- insert into animal values('shark', 'gray', 5, 'aquatic');
-- insert into animal values('cheetah', 'spots', 6, 'mammal');
-- insert into animal values('elephant2', 'gray', 15, 'mammal');
-- insert into animal values('whale', 'blue', 20, 'aquatic');
-- insert into animal values('zebra', 'black and white', 5, 'mammal');
-- insert into animal values('koala', 'gray', 4, 'mammal');
-- insert into animal values('octopus', 'orange', 2, 'aquatic');
-- insert into animal values('rhinoceros', 'gray', 8, 'mammal');


-- select count(animal.id) as a from animal where species = 'mammal';
-- ouput is 13
-- select count(animal.id) as a from animal where age <= 5;
-- output 14
-- select count(animal.id) as a from animal where 2 < age and age < 5;
-- output 7
-- select count(animal.id) as a from animal where colour = 'gray' and species = 'mammal';
-- output 4
-- select count(animal.id) as a from animal where colour = 'gray' and species = 'mammal';

select * from animal;
