# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statementdel
delete p1 from person p1 inner join person p2 on p1.email=p2.email where p1.id>p2.id;