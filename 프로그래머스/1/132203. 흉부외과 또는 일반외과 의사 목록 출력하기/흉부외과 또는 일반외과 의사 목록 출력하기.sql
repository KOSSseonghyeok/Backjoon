-- 코드를 입력하세요
SELECT DR_NAME, DR_ID, MCDP_CD, DATE_format(HIRE_YMD, '%Y-%m-%d') HIRE_YMD
from doctor
where mcdp_cd in ('CS', 'GS')
order by hire_ymd desc, dr_name;