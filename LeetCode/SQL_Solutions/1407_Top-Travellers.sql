select name, sum(ifnull(distance,0)) as travelled_distance 
from Users  
left join Rides on Rides.user_id = Users.id  -- Include all users, even those with no rides
group by Users.id -- Group by user ID to calculate total distance for each user
order by travelled_distance desc , name asc; -- Sort by highest distance, then name