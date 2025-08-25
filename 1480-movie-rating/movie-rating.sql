# Write your MySQL query statement below
(
    Select U.name as results
    from Users as U
    join MovieRating as M
    on U.user_id=M.user_id
    group by M.user_id
    order by count(M.rating) desc, name asc limit 1
    )
union all
(
    select results from
(
    select title as results,avg(rating) as avg_rating
    from Movies Mov
    join MovieRating M1
    on Mov.movie_id = M1.movie_id
    where M1.created_at >= '2020-02-01' and M1.created_at <= '2020-02-29'
    group by M1.movie_id
    ) rating
    order by avg_rating desc, results asc limit 1 ) ;