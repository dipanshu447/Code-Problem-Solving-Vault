-- my original solution 
select name as Customers from Customers c left join Orders on c.id = customerId where customerId is null;

-- efficient solution
select name as Customers from Customers where id not in (select distinct customerId from Orders);