PROGRAM POLINOM(INPUT,OUTPUT);
(* ВЫЧИСЛЕНИЕ МНОГОЧЛЕНА N-СТЕПЕНИ *)
(* С ЗАДАННЫМИ КОЭФФИЦИЕНТАМИ *)
VAR K,N:INTEGER;
    A,X,Y,Z:REAL;
BEGIN
READ(N); (* СТЕПЕНЬ МНОГОЧЛЕНА *)
IF N >= 0
   THEN BEGIN (* ВЫЧИСЛИТЬ Y *)
        READ(X);
        READ(A);
        Z:=1;
        Y:=A;
        FOR K:=1 TO N DO
            BEGIN READ(A);
            Z:=Z*X;
            Y:=Y + A*Z
            END;
        WRITE(Y)
        END
        ELSE WRITE('N - ОТРИЦАТЕЛЬНО: ', N)
END.