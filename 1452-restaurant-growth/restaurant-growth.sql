select distinct visited_on, amount, round(amount/7, 2) as average_amount from (select visited_on, 
sum(amount) over (order by visited_on range between interval 6 day preceding and current row) as amount,
dense_rank() over (order by visited_on) as rk from Customer) as t where rk >= 7