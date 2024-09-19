use sailor;
select * from reserves;
select * from boats;
select * from sailors;

-- select * from boats as boat where boat.boat_length between 10 and 20;
-- select * from reserves as r, boats as b where b.boat_id = r.boat_id and b.boat_length between 10 and 50 and r.reserve_date between '2023-11-01' and '2023-11-30';

SELECT r.reserve_id as res_id, b.boat_name as boat, b.boat_length as length, b.boat_color as colour
FROM reserves AS r, boats AS b
WHERE b.boat_id = r.boat_id
  AND b.boat_length BETWEEN 10 AND 50
  AND r.reserve_date BETWEEN '2023-01-01' AND '2023-01-30';

-- SELECT r.reserve_id as res_id, b.boat_name as boat, b.boat_length as length, b.boat_color as colour
-- FROM reserves AS r, boats AS b
-- WHERE b.boat_id = r.boat_id
-- and b.boat_color = 'white'or'deeppink'
-- AND b.boat_length BETWEEN 10 AND 50
-- AND r.reserve_date BETWEEN '2023-11-01' AND '2023-11-30';

SELECT * FROM sailors WHERE sailor_rating = (SELECT MAX(sailor_rating) FROM sailors);
SELECT * FROM sailors WHERE sailor_rating = (SELECT MIN(sailor_rating) FROM sailors);
select distinct(sailor_age) from sailors;
select avg(sailor_age) from sailors;
select avg(sailor_rating) from sailors;
select count(boat_id) from boats;


select s.sailor_id as id, s.sailor_rating as rating, s.sailor_name as Name from sailors  s, reserves r 
where( s.sailor_id = r.sailor_id)
group by s.sailor_id
having  s.sailor_rating 
order by s.sailor_rating  asc limit 1;


select s.sailor_id from sailors  s, boats b, reserves r 
where( s.sailor_id = r.sailor_id and b.boat_id = r.boat_id)
group by s.sailor_id
 having s.sailor_rating = (select min(s.sailor_rating) from sailors s)
 order by s.sailor_rating ASC;



 
select boat_id from boats
union
select boat_id from reserves
order by boat_id;

select boat_id from boats
union all
select boat_id from reserves
order by boat_id;

-- select boat_id from boats
-- where boat_id between 33 and 55
-- intersect
-- select * from reserves
-- where sailor_id between 1 and 5
-- order by boat_id;
 
select boat_id from boats
where boat_id not in
(select boat_id from reserves);

select boat_id from boats
where boat_id  in
(select boat_id from reserves);

select boat_name from boats 
where boat_id = all (select boat_id from boats where boat_color='red');

select boat_name from boats 
where boat_id = any (select boat_id from boats where boat_color='red');

select  timestampdiff(month,reserve_date,curdate()) as bookDate from reserves order by bookDate ASC;
select curdate();

select * from sailors order by sailor_rating DESC;
delete from sailors where sailor_id = 2;
set sql_safe_updates=0;


create view Rates as 
select sum(sailor_rating) , Sailor_id, Sailor_name, sailor_rating * 2 as increased_Rating from sailors where sailor_id between 1 and 5 
group by sailor_rating;

CREATE VIEW Rat AS 
SELECT sailor_rating , sailor_rating * 2 as increased_rating
FROM sailors
WHERE sailor_id BETWEEN 1 AND 5;

select * from Rat;
drop view rates;
