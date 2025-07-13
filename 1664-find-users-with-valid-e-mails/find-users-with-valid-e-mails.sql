SELECT * 
FROM Users
WHERE REGEXP_LIKE(mail,'^[a-zA-Z][a-zA-Z0-9._-]*@leetcode\\.com$', 'c');