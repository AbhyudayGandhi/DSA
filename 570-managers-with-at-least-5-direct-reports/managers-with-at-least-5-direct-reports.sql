# Write your MySQL query statement below
select m.name
from employee e join employee m
where m.id = e.managerId 
group by e.managerId
having count(*) >= 5;