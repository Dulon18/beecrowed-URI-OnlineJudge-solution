SELECT name,customers_number
FROM lawyers
where customers_number= (SELECT MAX(customers_number)FROM lawyers)

UNION ALL
SELECT name,customers_number
FROM lawyers
where customers_number= (SELECT MIN(customers_number)FROM lawyers)

UNION ALL
SELECT 'Average' AS name,round(AVG(customers_number),0) as customers_number
FROM lawyers
