select categories.name,sum(products.amount) as sum
from products
join categories
on categories.id=products.id_categories
group by categories.name
