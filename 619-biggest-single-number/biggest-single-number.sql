
SELECT MAX(num) AS num
from
(SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
)  t