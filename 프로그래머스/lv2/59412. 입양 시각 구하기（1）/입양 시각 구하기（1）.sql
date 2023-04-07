-- 코드를 입력하세요
SELECT date_format(datetime,'%H') as hour, count(*) from animal_outs
group by hour HAVING hour between 9 and 19
order by hour