PROGRAM XX2X3(INPUT,OUTPUT);
VAR K:INTEGER;
    X,X2,X3:REAL;
BEGIN
  WRITE('РЕЗУЛЬТАТЫ:ЧИСЛО,КВАДРАТ,КВАДРАТНЫЙ КОРЕНЬ');
  FOR K:=1 TO 20 DO
    BEGIN
      WRITELN;
      READ(X);
      IF X >= 0 THEN
        BEGIN
        X2:=SQR(X);
        X3:=SQRT(X);
        WRITE(X,X2,X3)
        END
      ELSE WRITE(X, 'ошибочное данное');
    END
END.
