select name from customers as c
where 
not exists(
    select * from orders as o
    where o.customer_id=c.id
)