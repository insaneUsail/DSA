# Write your MySQL query statement below
select c.name as Customers from Customers c left join Orders on c.id= orders.CustomerId
where orders.id is null