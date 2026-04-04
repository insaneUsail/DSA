# Write your MySQL query statement below
select s.user_id, round(ifnull(SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)/count(c.user_id),0),2) as Confirmation_rate from signups s left join confirmations c on s.user_id=c.user_id
group by user_id
