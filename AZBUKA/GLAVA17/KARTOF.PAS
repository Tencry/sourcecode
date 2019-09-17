PROGRAM KARTOF (INPUT, OUTPUT);
CONST N=40;
VAR I, K:INTEGER;
    P, MIN, S, Z, ZN:REAL;
    A, B, C:ARRAY[1..N] OF REAL;
BEGIN
READ(S);
(* ВВЕСТИ МАССИВ *)
FOR K:=1 TO N DO
    READ(B[K]);
FOR K:=1 TO N DO
    READ(C[K]);
ZN:=0; (* ЗАКУПЛЕННЫЙ КАРТОФЕЛЬ *)
Z:=0;  (* ЗАТРАТЫ *)
FOR K:=1 TO N DO
    A[K]:=0;
(* ВЫЧИСЛИТЬ P *)
P:=0;
FOR K:=1 TO N DO
    P:=P+B[K];
IF P < S
     THEN BEGIN
          WRITELN('КАРТОФЕЛЯ  НЕДОСТАТОЧНОЕ КОЛИЧЕСТВО');
          (* ПЛАН 1 *)
FOR K:=1 TO N DO
    BEGIN
    A[K]:=B[K];
    ZN:=ZN+A[K];
    Z:=Z+A[K]*C[K]
    END
END
ELSE IF P=S
        THEN               (* ПЛАН 2-ПЛАН 1 *)
        FOR K:=1 TO N DO
            BEGIN
            A[K]:=B[K];
            ZN:=ZN+A[K];
            Z:=Z+A[K]*C[K]
            END
        ELSE               (* ПЛАН 3 *)
          WHILE ZN < S DO
              BEGIN
              I:=1; MIN:=C[I];
              FOR K:=2 TO N DO
                  BEGIN
                  IF MIN > C[K]
                     THEN BEGIN
                          MIN:=C[K];
                          I:=K
                          END
                  END;
              IF ZN+B[I]>S
                    THEN A[I]:=S-ZN
ELSE A[I]:=B[I];
Z:=Z+A[I]*C[I];
ZN:=ZN+A[I];
C[I]:=MAXINT;
END;
FOR K:=1 TO N DO
    WRITELN(K, A[K]);
    WRITELN('ВСЕГО ЗАКУПЛЕНО ', ZN, ' ТОНН.');
    WRITELN('ЗАТРАТЫ ', Z, ' РУБЛЕЙ.')
END.
