-- Runtime: 1101 ms, faster than 18.75% of MySQL online submissions for Department Highest Salary.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Department Highest Salary.
SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
FROM Department D, Employee E, (SELECT departmentId, max(salary) as maxSalary FROM Employee GROUP BY departmentId) M
WHERE E.departmentId = M.departmentId AND E.salary = M.maxSalary AND E.departmentId = D.id;

SELECT
    Department.name AS 'Department',
    Employee.name AS 'Employee',
    Salary
FROM
    Employee
        JOIN
    Department ON Employee.DepartmentId = Department.Id
WHERE
    (Employee.DepartmentId , Salary) IN
    (   SELECT
            DepartmentId, MAX(Salary)
        FROM
            Employee
        GROUP BY DepartmentId
    )
;