-- 코드를 입력하세요
SELECT hours.hour, NVL(cnt, 0) "COUNT"
    FROM (SELECT TO_CHAR(datetime, 'HH24') as hour, COUNT(*) cnt 
            FROM animal_outs 
            GROUP BY TO_CHAR(datetime, 'HH24')) outs, 
        (SELECT LEVEL-1 AS hour
          FROM DUAL
       CONNECT BY LEVEL <=24) hours
    WHERE hours.hour = outs.hour(+)
    
    ORDER BY hour