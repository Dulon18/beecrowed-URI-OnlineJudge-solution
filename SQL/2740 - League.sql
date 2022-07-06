select concat('Podium: ',team) as name
from league
where position in (1,2,3)  

union all

(select concat('Demoted: ',team) as name
from league
where position in (14,15))
