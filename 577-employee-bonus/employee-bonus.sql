# Write your MySQL query statement below
select name,bonus 
from employee e left outer join bonus b on b.empId=e.empId
where bonus<1000 or bonus is null;