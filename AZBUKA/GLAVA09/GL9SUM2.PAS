PROGRAM GL9SUM2;
VAR I:INTEGER;
    S:REAL;
BEGIN
    FOR I:=1 TO 100 DO
        IF I MOD 2 = 1 THEN
           S:=S+1/I;
    WRITE('S = ', S);
    READLN;
END.