--Runtime: 189 ms, faster than 89.85% of MySQL online submissions for Swap Salary.
--Memory Usage: 0B, less than 100.00% of MySQL online submissions for Swap Salary.
UPDATE Salary
SET sex = IF (sex = 'm', 'f', 'm');