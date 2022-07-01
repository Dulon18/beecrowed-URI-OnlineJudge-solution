select products.name,providers.name
from((products
inner join providers on providers.id=products.id_providers )
inner join categories on categories.id=products.id_categories)
where categories.id=6
