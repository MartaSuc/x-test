//answer 1.1
SELECT b.Name FROM Building b
JOIN City ON
b.CityID=City.CityID
JOIN Country c ON
City.CountryID=c.CountryID
WHERE Country.Name='Poland';

//answer 1.2
SELECT Country.Name FROM Country
JOIN City ON
Country.CountryID=City.CountryID
GROUP BY CountryID
HAVING SUM(City.Population)>400;
/*
SELECT CountryID FROM City
GROUP BY CountryID
HAVING SUM(Population)>400;
*/

//answer 1.3*
SELECT Country.Name FROM Country
JOIN City ON
Country.CountryID=City.CountryID
LEFT JOIN Building ON
City.CityID=Building.CityID
WHERE BuildingID IS NULL;
