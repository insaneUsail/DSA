-- # Write your MySQL query statement below
-- select q.query_name,round(avg(q.rating/q.position),2) as quality,round(sum(rating<'3')/count(q.query_name)*100,2) as poor_query_percentage
-- from Queries q
-- group by q.query_name






select query_name, round(avg(p.rating/p.position),2) as quality, round(avg(p.rating<3)*100,2) as poor_query_percentage
from Queries p
group by query_name
