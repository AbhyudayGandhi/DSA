# Write your MySQL query statement below

select id from weather w where temperature > (select temperature from weather ww where w.recordDate=ww.recordDate+ Interval 1 day );