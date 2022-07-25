SELECT doctors.name , ROUND (result.salary, 1)
FROM doctors
INNER JOIN
(
    SELECT id_doctor, SUM( (hours * 150) +
    (( hours*150.0 * work_shifts.bonus) / 100.0) ) AS salary
    FROM work_shifts
    INNER JOIN
    attendances
    ON work_shifts.id = attendances.id_work_shift
    GROUP BY id_doctor
    
) AS result
ON result.id_doctor = doctors.id
ORDER BY result.salary desc ;
