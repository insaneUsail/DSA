# Write your MySQL query statement below
select t.contest_id,round((total/count(u.user_id))*100,2) as percentage
from(
select contest_id, count(contest_id) as total from Register r group by contest_id
) t,Users u
group by t.contest_id
order by percentage desc,contest_id asc;