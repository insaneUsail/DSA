# Write your MySQL query statement below
select name ,bonus from Employee left join Bonus On Employee.empID=Bonus.empID where Bonus.bonus<1000 or Bonus.bonus is null;