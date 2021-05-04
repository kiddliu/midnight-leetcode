SELECT Email
FROM PERSON
GROUP BY Email
HAVING COUNT(1) > 1;

# SELECT DISTINCT l.Email as Email
# FROM Person AS l, Person AS r
# WHERE l.Email = r.Email AND l.Id != r.Id