-- Runtime: 252 ms, faster than 67.43% of MySQL online submissions for Classes More Than 5 Students.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Classes More Than 5 Students.
SELECT class
FROM (SELECT class, COUNT(DISTINCT student) AS c FROM courses GROUP BY class) AS t
WHERE t.c >= 5;