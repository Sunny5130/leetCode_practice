# Write your MySQL query statement below
SELECT 'Low Salary' AS category,COUNT(if(income<20000,1,null)) AS accounts_count 
    FROM Accounts
UNION ALL
SELECT 'Average Salary',COUNT(if(income>=20000 and income<=50000,1,null))
    FROM Accounts UNION ALL
SELECT 'High Salary',COUNT(if(income>50000,1,null))FROM Accounts;