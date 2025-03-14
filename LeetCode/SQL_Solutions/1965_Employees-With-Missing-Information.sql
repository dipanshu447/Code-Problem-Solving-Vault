select e.employee_id 
from Employees e 
left join Salaries s on e.employee_id = s.employee_id -- Keeps all employees, even if they don't have a salary.
where e.name is null or s.salary is null -- Filters employees who have NULL names or missing salaries.
union 
select s.employee_id 
from Salaries s 
left join Employees e on s.employee_id = e.employee_id --  Keeps all salaries, even if they don’t have an employee record.
where e.employee_id is null -- Filters employees that exist in Salaries but not in Employees.
order by employee_id asc; -- ensures results are in ascending order.