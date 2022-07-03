
select products.name,categories.name
from products
join categories
on products.id_categories = categories.id
where products.amount >100 and (categories.id = 1 or categories.id =2 or
categories.id =3 or categories.id =6 or categories.id =9)
order by categories.id

