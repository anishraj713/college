Create database em;
use em;
create table empl
(
Emp_id int primary key,
Emp_Name varchar(40),
Design varchar (40),
Hire_date date,
Salary int ,
D_id int
);

insert into empl values 
-- (001,"Sachin","President","1991-11-18", 1200000, 1000);
(002,"Nishan","Manager(p)","1991-11-18", 1200000, 1000),
(003,"Mithu","President","1991-11-18", 1200000, 1000),
(004,"Mouri","President","1991-11-18", 1200000, 1000),
(005,"Dhruv","President","1991-11-18", 1200000, 1000),
(006,"Luka","President","1991-11-18", 1200000, 1000),
(007,"Eva","President","1991-11-18", 1200000, 1000);
