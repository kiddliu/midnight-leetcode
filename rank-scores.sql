-- Runtime: 452 ms, faster than 25.93% of MySQL online submissions for Rank Scores.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Rank Scores.
SELECT Score, DENSE_RANK() OVER(ORDER BY Score DESC) `rank`
FROM Scores
ORDER BY `rank`