# Write your MySQL query statement below
select product_id, 
    case when store1 is not NULL then 'store1' end as store,
    case when store1 is not NULL then store1 end as price
    from products where store1 is not null
    UNION
select product_id,     
    case when store2 is not null then 'store2' end as store,
    case when store2 is not NULL then store2 end as price
    from products where store2 is not null
    UNION
select product_id, 
    case when store3 is not null then 'store3'
    end as store,
    case when store3 is not NULL then store3 
    end as price
from products where store3 is not null


