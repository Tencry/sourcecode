PROGRAM PLOCHAD (INPUT, OUTPUT);
(*вычисление площади треугольника по трем сторонам*)
VAR A,B,C:REAL; (* стороны *)
    D : REAL  ; (* значение большей из сторон *)
    P : REAL  ; (* полупериметр *)
    S : REAL  ; (* площадь *)
BEGIN
(* задачть A, B, C  *)
READ (A,B,C); WRITELN('ВХОД: ', A, B, C);
(* вычислить полупериметр *)
P:=(A+B+C)/2;
(* найти наибольшую длину *)
D:=A;
IF D < B THEN D:=B;
IF D < C THEN D:=C;
IF(* A, B, C - стороны *) P > D
     THEN BEGIN (* вычислить площадь *)
          S:=SQRT(P*(P-A)*(P-B)*(P-C));
          WRITELN('ПЛОЩАДЬ: ', S);
          END
     ELSE WRITELN(A,B,C, ' не являются сторонами треугольника')
END.
