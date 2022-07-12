/* Write your T-SQL query statement below */
select id from weather outers
where temperature > (select temperature from weather where recordDate= DATEADD(day, -1, outers.recordDate) )