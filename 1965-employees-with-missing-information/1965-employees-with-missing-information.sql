# Write your MySQL query statement below
# select employee_id 
# from employees 
# full outer join salaries
# on employees.employee_id=salaries.employee_id
# where salary is NULL or name is NULL

select employee_id from Employees where employee_id not in (select employee_id from Salaries)
union
select employee_id from Salaries where employee_id not in (select employee_id from Employees) order by employee_id;