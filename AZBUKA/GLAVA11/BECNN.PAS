PROGRAM BECCNN (INPUT, OUTPUT);
VAR MAX, X: REAL;
BEGIN
READ (X);
IF NOT EOF (INPUT)
   THEN BEGIN
        MAX:=X;
        WHILE NOT EOF (INPUT) DO
            BEGIN
            IF X > MAX
               THEN MAX:=X;
               READ(X)
            END;
        WRITE (MAX)
        END
   ELSE WRITE('ВХОДНОЙ ФАЙЛ ПУСТ')
END.