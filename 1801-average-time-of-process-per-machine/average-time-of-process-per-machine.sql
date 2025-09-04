select machine_id,
Round(avg(end_time-Start_time),3) as processing_time
from (
   select machine_id,process_id,
  MAX(CASE WHEN activity_type = 'end' THEN timestamp END) AS end_time,
      MAX(CASE WHEN activity_type = 'start' THEN timestamp END) AS Start_time
from Activity
group by machine_id,process_id
) t
group by machine_id;
