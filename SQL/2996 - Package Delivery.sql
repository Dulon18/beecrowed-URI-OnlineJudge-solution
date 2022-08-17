SELECT year, sender, receiver
FROM packages 
INNER JOIN (
	SELECT id_package, name AS sender 
	FROM packages 
	INNER JOIN users 
	ON id_user_sender = id 
	WHERE address <> 'Taiwan'
) AS tab1
ON tab1.id_package = packages.id_package
INNER JOIN (
	SELECT id_package, name AS receiver 
	from packages 
	INNER JOIN users 
	ON id_user_receiver = id 
	WHERE address <> 'Taiwan'
) AS tab2
ON tab2.id_package = packages.id_package
WHERE color = 'blue' OR year = 2015
ORDER BY year DESC, sender DESC

