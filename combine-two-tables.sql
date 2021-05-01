--LEFT JOIN, pay attention to ON over WHERE
--ON is for joining, WHERE is for filtering

SELECT Person.FirstName, Person.LastName, Address.City, Address.State
FROM Person LEFT JOIN Address
ON Person.PersonId = Address.PersonId;
