select t.product_id, IFNULL(ROUND(SUM(t.price * t.units) / SUM(t.units), 2), 0) as average_price from
    (select p.*, u.units
    from Prices p left join UnitsSold u 
   on u.purchase_date<=end_date and u.purchase_date >=start_date and p.product_id=u.product_id
    ) t
group by t.product_id