SELECT i.animal_id , i.animal_type, i.name from animal_ins as i
inner join animal_outs as o on i.animal_id = o.animal_id
where (o.sex_upon_outcome like '%Neutered%' or o.sex_upon_outcome like '%Spayed%')
and i.sex_upon_intake like '%intact%'
order by o.animal_id;