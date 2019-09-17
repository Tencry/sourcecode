PROGRAM LINKWAD(INPUT, OUTPUT);
(*РАЗДЕЛ ПЕРЕМЕННЫХ*)
VAR A,B,C,X,X1,X2:REAL;
    K,N,P:INTEGER;
(*РАЗДЕЛ ПРОЦЕДУР*)

(*ПРОЦЕДУРА РЕШЕНИЯ КВАДР. УРАВНЕНИЯ*)
PROCEDURE KWADR(E, F, G:REAL;
                VAR X1, X2:REAL;
                VAR P: INTEGER);
VAR D: REAL; (*дискриминант*)
BEGIN
D:=F*F-4*E*G;
IF D<0
   THEN P:=0
   ELSE BEGIN
        E:=E*2;
        IF D=0
           THEN BEGIN P:=1;
                      X1:=-F/E END
           ELSE BEGIN
                P:=2;
                D:=SQRT(D);
                X1:=(-F+D)/E;
                X2:=(-F-D)/E
                END
        END
END;

(*ПРОЦЕДУРА РЕШЕНИЯ ЛИНЕЙНОГО УРАВНЕНИЯ*)
PROCEDURE LINEAR(B, C: REAL; 
                 VAR X: REAL; 
                 VAR P: INTEGER);
BEGIN
IF B<>0 THEN BEGIN
             P:=1;
             X:=-1 * C/B
             END
        ELSE IF B=0 THEN 
                    IF C=0 THEN P:=3
                           ELSE P:=0;
END;

(*РАЗДЕЛ ОПЕРАТОРОВ*)
BEGIN
READ(N);
IF N < 0 THEN WRITE ('ошибка в данных')
   ELSE BEGIN FOR K:=1 TO N DO
              BEGIN
              READ(A,B,C);
              IF A=0
                 THEN LINEAR(B,C,X1,P)
                      (*ВЫЗОВ ПРОЦЕДУРЫ LINEAR*)
              ELSE KWADR(A,B,C,X1,X2,P);
              (*ВЫВОД РЕЗУЛЬТАТОВ*)
              WRITELN('УР-НИЕ с КОЭФ.',A,B,C);
              
              CASE P OF 
                   0: WRITELN('не имеет решения');
                   1: WRITELN('имеет одно решение ', X1);
                   2: WRITELN('имеет два деств. корня ', X1, X2);
                   3: WRITELN('имеет бескон. мн-во решений');
              END 
              END
        END
END.
