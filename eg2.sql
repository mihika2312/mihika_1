set serveroutput on;
declare
m1 number(3);
m2 number(3);
m3 number(3);
result number(3);
begin
result := (&m1+&m2+&m3)/3;
IF (result > 90) then
dbms_output.put_line ('outstanding');
elsif (result > 65) then
dbms_output.put_line('good');
else
dbms_output.put_line('needs improvment');
end if;
end;
/

