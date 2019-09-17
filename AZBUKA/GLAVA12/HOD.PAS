PROGRAM HOD (INPUT, OUTPUT);
VAR A, B, NOD, R, X, Y:INTEGER;
BEGIN
READ (A, B);
IF A > B
   THEN BEGIN X:=A; Y:=B END
        ELSE BEGIN X:=B; Y:=A END;

IF (X > 0) AND (Y >= 0)
   THEN BEGIN
        WHILE Y <> 0 DO
          BEGIN
          R:=X MOD Y;
          X:=Y;
          Y:=R
          END;
          NOD:=X;
          WRITE ('НОД чисел ', A, ' и ', B, ' равен ', NOD)
        END
ELSE WRITE('ОШИБКА В ДАННЫХ')
END.