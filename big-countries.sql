-- Runtime: 229 ms, faster than 74.54% of MySQL online submissions for Big Countries.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Big Countries.
SELECT name, population, area
FROM World
WHERE area > 3000000 OR population > 25000000;