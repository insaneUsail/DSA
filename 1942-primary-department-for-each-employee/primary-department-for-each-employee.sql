# Write your MySQL query statement below
select employee_id,ifnull(max(case when primary_flag='Y' then department_id end),min(department_id)) as department_id
from Employee
group by employee_id