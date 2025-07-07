# Write your MySQL query statement below
select e.unique_id,u.name from employees u left join employeeuni e using(id);