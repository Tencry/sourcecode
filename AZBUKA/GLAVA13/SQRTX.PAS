PROGRAM SQRTX (INPUT, OUTPUT);
VAR E, X, XC, XH:REAL;
BEGIN
READ(X);
IF X > 0
   THEN BEGIN
        E:=1.0E-6;
        XC:=1;
        XH:=(XC+X/XC)/2;
        WHILE ABS(XC-XH) > E DO
              BEGIN
              XC:=XH;
              XH:=(XC+X/XC)/2;
              END;
        WRITE (XH, ABS(XH-XC))
        END
   ELSE WRITE('попытка извлечения квадратного корня из отрицательного числа')
END.
