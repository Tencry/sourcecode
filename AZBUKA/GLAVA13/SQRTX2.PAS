PROGRAM SQRTX (INPUT, OUTPUT);
VAR E, X, XC, XH:REAL;
BEGIN
READ(X);
IF X > 0
   THEN BEGIN
        E:=1.0E-6;
        XH:=1;
	REPEAT
	XC:=XH;
        XH:=(XC+X/XC)/2;
        UNTIL ABS(XC-XH) < E;
	WRITE(XH, ABS(XH-XC))
	END
   ELSE WRITE('попытка извлечения квадратного корня из отрицательного числа')
END.
