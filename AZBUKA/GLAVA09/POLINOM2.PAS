PROGRAM POLINOM2(INPUT, OUTPUT);
(* ВЫЧИСЛЕНИЕ ЗНАЧЕНИЯ МНОГОЧЛЕНА *)
VAR K,N:INTEGER;
    A,X,Y:REAL;
BEGIN
READ(N);
IF N >= 0
   THEN BEGIN
        READ(X);
        Y:=0;
        FOR K:=0 TO N DO
            BEGIN
            READ(A);
            Y:=Y*X + A;
            END;
        WRITE(Y)
        END
   ELSE WRITE ('N ОТРИЦАТЕЛЬНО', N);
END.