-- Runtime: 419 ms, faster than 91.70% of MySQL online submissions for Consecutive Numbers.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Consecutive Numbers.
SELECT DISTINCT num AS ConsecutiveNums
FROM Logs
WHERE (id + 1, num) in (SELECT * FROM Logs) AND (id + 2, num) in (SELECT * FROM Logs);