--Runtime: 163 ms, faster than 93.05% of MySQL online submissions for Not Boring Movies.
--Memory Usage: 0B, less than 100.00% of MySQL online submissions for Not Boring Movies.
SELECT *
FROM Cinema
WHERE description != 'boring' AND (id % 2) = 1
ORDER BY rating DESC