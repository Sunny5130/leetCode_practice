# Write your MySQL query statement below
SELECT ROUND(COUNT(*)/(SELECT COUNT(DISTINCT player_id) FROM Activity),2) AS fraction
FROM (SELECT player_id, MIN(event_date) AS first_date FROM Activity GROUP BY player_id)
a JOIN Activity b ON a.player_id = b.player_id AND DATEDIFF(b.event_date, a.first_date) = 1