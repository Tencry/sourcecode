PROGRAM KLAD2(OUTPUT); (*программа движения к кладу*)
VAR X,Y:REAL; (*координаты кладоискателя*)
BEGIN
X:=0; Y:=0; (*исходное положение*)
X:=X+3; Y:=Y+3; (*3 шага на северо-восток*)
Y:=Y+1; (*1 шаг на восток*)
WRITE(X,Y);
END.
