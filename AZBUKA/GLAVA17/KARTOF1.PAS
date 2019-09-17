PROGRAM KARTOF1 (INPUT, OUTPUT);
CONST M=1; N=40;
TYPE ARMNR=ARRAY[M..N] OF REAL;
VAR K:INTEGER;
    P, S, Z, ZN:REAL;
    A, B, C:ARMNR;

PROCEDURE READM(M, N:INTEGER; VAR A:ARMNR);
VAR K:INTEGER;
BEGIN
FOR K:=M TO N DO
    READ(A[K])
END;

FUNCTION SUM(M,N:INTEGER; VAR A:ARMNR):REAL;
VAR K:INTEGER;
    S:REAL;
BEGIN
S:=0;
FOR K:=M TO N DO
    S:=S+A[K];
    SUM:=S;
END;

PROCEDURE PLAN1(M,N:INTEGER; VAR Z, ZN:REAL; VAR A, B, C:ARMNR);
VAR K:INTEGER;
BEGIN
FOR K:= M TO N DO
    BEGIN
    A[K]:=B[K];
    Z:=Z+A[K]*C[K];
    ZN:=ZN+A[K];
    END
END;

PROCEDURE PLAN3(M,N:INTEGER; S:REAL;
                VAR Z, ZN:REAL;
                VAR A, B, C:ARMNR);
VAR I:INTEGER;
FUNCTION NMIN(M,N:INTEGER;
VAR A:ARMNR):INTEGER;
VAR K:INTEGER;
    MIN:REAL;
BEGIN
NMIN:=M; MIN:=A[M];
FOR K:=M+1 TO N DO 
    IF MIN > A[K]
       THEN BEGIN
            MIN:=A[K];
            NMIN:=K
            END
END;
BEGIN ZN:=0; Z:=0; (*закупленное количество 
                   картофеля и затраты по-
                   лагаем равными нулю*)
WHILE ZN < S DO
      BEGIN
      I:=NMIN(M,N,C);
      IF ZN+B[I] > S
         THEN A[I]:= S-ZN
         ELSE A[I]:=B[I];
      Z:=Z+A[I]*C[I];
      ZN:=ZN+A[I];
      C[I]:=MAXINT
      END
END;

BEGIN
READ(S);
READM(1,N,B);
READM(1,N,C);
FOR K:=1 TO N DO
    A[K]:=0;
P:=SUM(M, N, B);
IF P < S
   THEN BEGIN
        WRITELN('КАРТОФЕЛЯ НЕ ДОСТАТОЧНО');
        PLAN1 (M, N, Z, ZN, A, B, C)
        END
   ELSE IF P=S
           THEN PLAN1(M, N, Z, ZN, A, B, C)
           ELSE PLAN3(M, N, S, Z, ZN, A, B, C);
FOR K:= 1 TO N DO
    WRITELN (K, A[K]);
    WRITELN ('ВСЕГО ', ZN);
    WRITELN ('ЗАТРАТЫ ', Z)
END.
