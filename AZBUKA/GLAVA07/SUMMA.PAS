PROGRAM SUMMA (OUTPUT);
(* сумма первых N натуральных чисел *)
VAR I,N,S:INTEGER;
BEGIN
N:=25;
S:=0;
FOR I:=1 TO N DO
  S:=S+I;
WRITE(S)
END.