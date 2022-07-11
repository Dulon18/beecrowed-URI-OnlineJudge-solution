SELECT temperature,COUNT(mark) as number_of_records
FROM records
GROUP BY temperature,mark
order by mark
