# Write your MySQL query statement below

-- select salary as SecondHighestSalary fROM Employee order by salary desc limit 1 OFFSET 1;

-- SELECT (
--   SELECT DISTINCT salary 
--   FROM Employee 
--   ORDER BY salary DESC 
--   LIMIT 1 OFFSET 1
-- ) AS SecondHighestSalary;

select MAX(salary)as SecondHighestSalary from Employee
where salary<(Select MAX(salary) from Employee);