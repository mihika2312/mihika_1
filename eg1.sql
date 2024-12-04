SET SERVEROUTPUT ON
DECLARE
 v_country_id locations.country_id%TYPE := 'CA';
v_location_id locations.location_id%TYPE ;
v_country NUMBER(2) :=1;
v_city locations.city%type := 'monareal';
begin
select max(location_id) into v_location from locations where country_id = v_country_id;
loop
 insert into locations(location_id,city,country_id);
v_counter := v_counter +1 ;
exit when v_counter >3;
endl;
/