Select l.Name as Employee
FROM Employee as l, Employee as r
WHERE l.ManagerId = r.Id AND l.Salary > r.Salary;