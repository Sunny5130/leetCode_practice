# Write your MySQL query statement below
SELECT MAX(num)as num FROM (select num
from MyNumbers GROUP BY num HAVING COUNT(*) = 1)as single_numbers;