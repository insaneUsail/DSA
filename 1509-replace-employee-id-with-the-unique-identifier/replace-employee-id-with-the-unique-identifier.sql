Select name,unique_id
from Employees 
left join EmployeeUNI
on EmployeeUNI.id = Employees.id