-- 코드를 작성해주세요
select concat(length, 'cm') MAX_LENGTH
from fish_info
order by length desc
limit 1;