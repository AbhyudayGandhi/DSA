# Write your MySQL query statement below

select w.id from weather w join weather ww where w.temperature > ww.temperature and w.recordDate = ww.recordDate+ interval 1 day;  