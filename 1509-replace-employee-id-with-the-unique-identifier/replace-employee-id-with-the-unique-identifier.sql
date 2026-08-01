# Write your MySQL query statement below
select unique_id, name from employees a left outer join employeeuni b on a.id=b.id ;